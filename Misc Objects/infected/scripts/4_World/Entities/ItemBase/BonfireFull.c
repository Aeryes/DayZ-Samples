class BonfireFull extends ItemBase
{

    //protected Particle m_fireSmoke;
    bool canIgnite = true;
    bool damage = false;
    bool lightup = false;
    bool heatup = false;
    bool extinguish = false;

    Particle                                        m_fireSmoke;
    BonfireLight                                    m_Light;
    EffectSound                                     m_SoundFireLoop;
    ref AreaDamageBase                              m_AreaDamage;

    const string SOUND_FIRE_HEAVY                   = "HeavyFire_SoundSet";
    const float PARAM_HEAT_RADIUS 					= 8.0;		//! radius in which objects are heated by fire
	const float PARAM_HEAT_THROUGH_AIR_COEF			= 0.06;	//! value for calculation of heat transfered from fireplace through air to player (environment)

    int PARTICLEBONFIRE                             = ParticleList.BONFIRE;

    void BonfireFull()
    {
    
        RegisterNetSyncVariableInt("PARTICLEBONFIRE");
        RegisterNetSyncVariableBool("canIgnite");
        RegisterNetSyncVariableBool("damage");
        RegisterNetSyncVariableBool("lightup");
        RegisterNetSyncVariableBool("heatup");
        RegisterNetSyncVariableBool("extinguish");

    }

    void ~BonfireFull()
    {

        // Turn of effects..
        if(m_fireSmoke)
        {

            m_fireSmoke.Stop();
            m_Light.FadeOut(5);  
            m_AreaDamage.Destroy();

        }

    }

	void inf_Destory()
	{
		//delete object
		GetGame().ObjectDelete( this );
	}
	
    override bool CanPutIntoHands( EntityAI parent )
	{

		return false;

	}

	override bool CanPutInCargo ( EntityAI parent )
	{

		return false;

	}

	override void SetActions()
    {

        super.SetActions();
        AddAction(ActionIgniteBonfire); // Custom ignite action.

    }

    // Ignite functions.
    void SetIgnite(bool ignite)
    {
        
        if(ignite)
        {

            canIgnite = true;
            //Ignite(true);

        } else {

            canIgnite = false;
            //Extinguish(true);

        }

        Print("[Debug] Set ignite done..." + canIgnite);
        SetSynchDirty();

    }

    bool GetIgnite()
    {

        return canIgnite;

    }

	void Synchronize()
	{
		if ( GetGame() && GetGame().IsServer() )
		{
			SetSynchDirty();
			
			if ( GetGame().IsMultiplayer() && GetGame().IsServer() )
			{
				//Refresh visuals (on server)
				GetGame().GetCallQueue( CALL_CATEGORY_GAMEPLAY ).Call( Ignite );
			}
		}
	}

    //on store save/load
	override void OnStoreSave( ParamsWriteContext ctx )
	{   
		super.OnStoreSave(ctx);

		//Save whether the bonfire can be ignited
		ctx.Write(canIgnite);
		ctx.Write(lightup);
		ctx.Write(damage);
		ctx.Write(PARTICLEBONFIRE);
		ctx.Write(extinguish);

	}
	
	override bool OnStoreLoad( ParamsReadContext ctx, int version )
	{
		if ( !super.OnStoreLoad(ctx, version) )
			return false;

		//--- Fireplace data ---
		//Load canIgnite value.
		if ( !ctx.Read( canIgnite ) )
		{
			canIgnite = false;			//set default
			return false;
		}
		if ( !ctx.Read( lightup ) )
		{
			canIgnite = false;			//set default
			return false;
		}
		if ( !ctx.Read( damage ) )
		{
			canIgnite = false;			//set default
			return false;
		}
		if ( !ctx.Read( PARTICLEBONFIRE ) )
		{
			canIgnite = false;			//set default
			return false;
		}
		if ( !ctx.Read( extinguish ) )
		{
			canIgnite = false;			//set default
			return false;
		}
		
		return true;
	}
	
	override void AfterStoreLoad()
	{	
		super.AfterStoreLoad();
				
		//synchronize
		Synchronize();
		
		//start fire
		if ( canIgnite )
		{
            if ( GetGame() && GetGame().IsServer() )
            {
            	Ignite(true); //will be auto-synchronized when starting fire
            } 

		}		
	}	

	override void OnVariablesSynchronized()
	{

		super.OnVariablesSynchronized();

		if(lightup)
		{
			CreateAreaDamage(true);
			Ignite(true);
		}
		else if(lightup == false)
		{
			//DestroyAreaDamage();
			m_AreaDamage.Destroy();
			Extinguish(true);
		}

	}

    // Taken from fireplacebase.c
	BonfireLight GetLightEntity()
	{

		return m_Light;

	}

    // Taken from fireplacebase.c
	void SetLightEntity( BonfireLight light )
	{

		m_Light = light;
		//m_Light.AttachOnMemoryPoint( this, "light" );

	}	

	//transfer heat to all nearby players
	void TransferHeatToNearPlayers(bool heat)
	{

		heatup = heat;
		SetSynchDirty();
		float distance;

        if(heatup)
        {
			ref array<Object> nearest_objects = new array<Object>;
			ref array<CargoBase> proxy_cargos = new array<CargoBase>;

			GetGame().GetObjectsAtPosition ( GetPosition(), PARAM_HEAT_RADIUS, nearest_objects, proxy_cargos ); 

			for ( int i = 0; i < nearest_objects.Count(); i++ )
			{
				Object nearest_object = nearest_objects.Get(i);
				
				//! heat transfer to player
				if ( nearest_object.IsInherited( PlayerBase ) )
				{
					PlayerBase player = PlayerBase.Cast( nearest_object );
					distance = vector.Distance( player.GetPosition(), GetPosition() );
					distance = Math.Max( distance, 0.1 );	//min distance cannot be 0 (division by zero)
					
					//! heat transfer through air to player ( anv temperature )
					float temperature = GetTemperature() * ( PARAM_HEAT_THROUGH_AIR_COEF / distance );
					player.AddToEnvironmentTemperature( temperature );
				}
				//! heat transfer to items (no in player possession)
				else if ( nearest_object != this && nearest_object.IsInherited( ItemBase ) && nearest_object.GetParent() == null )
				{
					ItemBase item = ItemBase.Cast( nearest_object );
					float wetness = item.GetWet();

					//! drying of items around the fireplace (based on distance)
					if ( wetness > 0 )
					{
						distance = vector.Distance( item.GetPosition(), GetPosition() );
						distance = Math.Max( distance, 0.1 );	//min distance cannot be 0 (division by zero)
						
						wetness = wetness * ( PARAM_HEAT_THROUGH_AIR_COEF / distance );
						wetness = Math.Clamp( wetness, item.GetWetMin(), item.GetWetMax() );
						item.AddWet( -wetness );
					}
				}

	            SetSynchDirty();

		    }
		}
	}

	//Create and Destroy damage radius around the fireplace when starting/stopping burning process
	void CreateAreaDamage(bool dmg)
	{

		damage = dmg;
		SetSynchDirty();
		//destroy area damage if some already exists
		//DestroyAreaDamage();
		if(m_AreaDamage)
		{

            m_AreaDamage.Destroy();

		}
		
		if(damage)
		{

		    //create new area damage
		    m_AreaDamage = new AreaDamageRegularDeferred( this );
		    m_AreaDamage.SetExtents("-1.00 0 -1.00", "1.00 2.8 1.00");
		    m_AreaDamage.SetLoopInterval( 0.5 );
		    m_AreaDamage.SetDeferDuration( 0.5 );
		    m_AreaDamage.SetHitZones( { "Head","Torso","LeftHand","LeftLeg","LeftFoot","RightHand","RightLeg","RightFoot" } );
		    m_AreaDamage.SetAmmoName( "FireDamage" );
		    m_AreaDamage.Spawn();
		    SetSynchDirty();

		}
	}
	
	// void DestroyAreaDamage()
	// {

	// 	m_AreaDamage.Destroy();
		
	// }

    void Ignite(bool lgt)
    {

    	lightup = lgt;
    	SetSynchDirty();
        
        if(lightup)
        {

	        if(canIgnite == true)
	        {

	        	if(GetGame().IsClient() || !GetGame().IsMultiplayer())
	            {

	        		// Smoke particles.
	                m_fireSmoke = Particle.PlayOnObject(PARTICLEBONFIRE, this, Vector( 0, 0, 0 )) ;
	                
	                // Adds the light to the entity.
	                SetLightEntity(BonfireLight.Cast( ScriptedLightBase.CreateLight(BonfireLight, Vector( 0, 0, 0 ), 8) ) );
					GetLightEntity().AttachOnMemoryPoint(this, "light");
					PlaySoundSetLoop( m_SoundFireLoop, SOUND_FIRE_HEAVY, 1.0, 1.0 );
	                Print("[Debug] Fire particles started... canIgnite = " + canIgnite);
	                //SetSynchDirty();

	            } 
			}
        }
    }  

    void Extinguish(bool ext)
    {

        extinguish = ext;
        SetSynchDirty();

        if(extinguish)
        {

	    	if(canIgnite == false)
	    	{

	            if(GetGame().IsClient())
	            {

	               // Turn of smoke and fire effects.
	                m_fireSmoke.Stop();

	                // Turn of light effects.
			        GetLightEntity().FadeOut();
			        StopSoundSet(m_SoundFireLoop);
			        Print("[Debug] Extinguish event. canIgnite = " + canIgnite);

	            }

	    	}

        }

    } 

};

// TODOS
// 1. Add saving the state of fires.
// 3. Add building recipes.
// 4. Add heat effects.
// 5. Add damage effects if you walk on it.