// This modded Hologram class displays the white transparent items when building.
modded class Hologram
{
	
	 override string ProjectionBasedOnParent()
     {
	 	ItemBase item_in_hands = ItemBase.Cast(m_Player.GetHumanInventory().GetEntityInHands());	
		
	 	// Base Items.
	    if (item_in_hands.IsInherited(WoodenCrateModded))
	    	return "WoodenCrateModded";

		if (item_in_hands.IsInherited(Locked_Safe))
			return "Locked_Safe";

		if (item_in_hands.IsInherited(WeaponRack))
			return "WeaponRack";

		if (item_in_hands.IsInherited(Laptop))
			return "Laptop";

		if (item_in_hands.IsInherited(NormalLadder_Packed))
			return "NormalLadder";
		
	 	// Tents.
	 	if (item_in_hands && item_in_hands.IsInherited(CivilianTentCamoPacked))
	 		return "CivilianTentCamoDeployed";
		
		if (item_in_hands.IsInherited(CivilianTentWoodlandCamoPacked))
			return "CivilianTentWoodlandCamoDeployed";
		
		if (item_in_hands.IsInherited(CivilianTentBlackPacked))
			return "CivilianTentBlackDeployed";

		if (item_in_hands.IsInherited(CivilianTentBluePacked))
			return "CivilianTentBlueDeployed";
		
		if (item_in_hands.IsInherited(CivilianTentGreyPacked))
			return "CivilianTentGreyDeployed";

		if (item_in_hands.IsInherited(CivilianTentRedPacked))
			return "CivilianTentRedDeployed";
        
        //New 2020 tents.
		if (item_in_hands.IsInherited(CivilianTentRedCamoPacked))
			return "CivilianTentRedCamoDeployed";

		if (item_in_hands.IsInherited(CivilianTentGreyCamoPacked))
			return "CivilianTentGreyCamoDeployed";

		if (item_in_hands.IsInherited(CivilianTentDesertCamoPacked))
			return "CivilianTentDesertCamoDeployed";

		if (item_in_hands.IsInherited(CivilianTentWinterCamoPacked))
			return "CivilianTentWinterCamoDeployed";

		if (item_in_hands.IsInherited(CivilianTentMil001Packed))
			return "CivilianTentMil001Deployed";

		if (item_in_hands.IsInherited(CivilianTentYellowPacked))
			return "CivilianTentYellowDeployed";
	    
	    // Sleeping bags.
	    if (item_in_hands.IsInherited(SleepingBagGreenPacked))
			return "SleepingBagGreenDeployed";
	
	    if (item_in_hands.IsInherited(SleepingBagBlackPacked))
			return "SleepingBagBlackDeployed";

	    if (item_in_hands.IsInherited(SleepingBagBluePacked))
			return "SleepingBagBlueDeployed";
	
	    if (item_in_hands.IsInherited(SleepingBagGreyPacked))
			return "SleepingBagGreyDeployed";

	    if (item_in_hands.IsInherited(SleepingBagRedPacked))
			return "SleepingBagRedDeployed";

		// Base Buildings.
	    if (item_in_hands.IsInherited(WoodenCrossKit))
			return "WoodenCrossFull";

	    if (item_in_hands.IsInherited(PianoKit))
			return "PianoFull";

	    if (item_in_hands.IsInherited(CurvedSandBagKit))
			return "CurvedSandBagFull";

		//if (item_in_hands.IsInherited(Barricade))
			//return "Barricade";

		//Pallisade Gate.
	    //if (item_in_hands.IsInherited(PallisadeGateKit))
		//	return "PallisadeGateFull";

	 	return super.ProjectionBasedOnParent();
	 };

    // Barricade functionality.
	override bool IsBehindObstacle() 
	{

		if(GetGame().ObjectIsKindOf(m_Projection, "Barricade")) {
			Print("[Debug] Inside IsBehindObstacle function...");
			return false;
		}
		
		Print("[Debug] Outside IsBehindObstacle function...");
		return super.IsBehindObstacle();
		
	}
	
	// override bool IsCollidingBase() 
	// {

	// 	if(GetGame().ObjectIsKindOf(m_Projection, "Barricade")) {
	// 		Print("[Debug] Inside IsCollidingBase function...");
	// 		return false;
	// 	}
		
	// 	Print("[Debug] Outside IsCollidingBase function...");
	// 	return super.IsCollidingBase();

	// }

	override void AddProjectionRotation( float addition ) 
	{

		if(GetGame().ObjectIsKindOf(m_Projection, "Barricade")) {
			Print("[Debug] Inside AddProjectionRotation function...");
			m_DefaultOrientation[2] = m_DefaultOrientation[2] + addition;
		}
			
		Print("[Debug] Outside AddProjectionRotation function...");
		super.AddProjectionRotation(addition);

	}
	
	override void SubtractProjectionRotation( float subtraction ) 
	{	

		if(GetGame().ObjectIsKindOf(m_Projection, "Barricade")) {
			Print("[Debug] Inside SubtractProjectionRotation function...");
			m_DefaultOrientation[2] = m_DefaultOrientation[2] - subtraction;
		}

        Print("[Debug] Outside SubtractProjectionRotation function...");
		super.SubtractProjectionRotation(subtraction);
		
	}
	
	override void SetProjectionOrientation( vector orientation ) 
	{

		if(GetGame().ObjectIsKindOf(m_Projection, "Barricade")) {
			Print("[Debug] Inside SetProjectionOrientation function...");
			m_Projection.SetOrientation( m_Rotation );
		} else
		{

            Print("[Debug] Outside SetProjectionOrientation function...");
		    super.SetProjectionOrientation(orientation);

		}
	}
	
	override vector GetDefaultOrientation() 
	{

		if(GetGame().ObjectIsKindOf(m_Projection, "Barricade")) {
			Print("[Debug] Inside GetDefaultOrientation function...");
			return m_DefaultOrientation;
		}

        Print("[Debug] Outside GetDefaultOrientation function...");
		return super.GetDefaultOrientation();
		
	}
	
	override bool IsFloating() 
	{

		if(GetGame().ObjectIsKindOf(m_Projection, "Barricade")) {
			Print("[Debug] Return false...");
			return false;
		}

		Print("[Debug] Return m_IsFloating");
		return m_IsFloating;

	}

	override vector GetProjectionEntityPosition( PlayerBase player ) 
	{

		if(GetGame().ObjectIsKindOf(m_Projection, "Barricade")) {
			Print("[Debug] Inside GetProjectionEntityPosition function...");
			Print("[Debug] PlaceOnWall vector is: " + PlaceOnWall(player));
			return PlaceOnWall(player);
		}
		
		Print("[Debug] Inside else part of GetProjectionEntityPosition...");
		return super.GetProjectionEntityPosition(player);
	}

	PhxInteractionLayers barricade_mask = PhxInteractionLayers.BUILDING /*| PhxInteractionLayers.DOOR */| PhxInteractionLayers.FENCE;
	
	ItemBase leftRef;
	ItemBase rightRef;
	ItemBase dirRef;
	
	vector PlaceOnWall( PlayerBase player ) {

        Print("[Debug] Inside PlaceOnWall function...");
		float min_projection_dist = 0.05;
		float max_projection_dist = DISTANCE_SMALL_PROJECTION *2;
		float camera_to_player_distance = vector.Distance( GetGame().GetCurrentCameraPosition(), player.GetPosition() );
		
		vector board_breadth = GetGame().GetCurrentCameraDirection().VectorToAngles();
		board_breadth[0] = board_breadth[0] - 90;
		board_breadth[1] = -m_DefaultOrientation[2];
		board_breadth = board_breadth.AnglesToVector().Normalized();
		vector fromLeft = GetGame().GetCurrentCameraPosition() + ( board_breadth * ( m_Projection.GetMemoryPointPos("barricade_left")[0] ) ) + (GetGame().GetCurrentCameraDirection().Normalized()*0.1);
		vector toLeft = fromLeft + ( GetGame().GetCurrentCameraDirection() * ( max_projection_dist + camera_to_player_distance ) );
		vector fromCenter = GetGame().GetCurrentCameraPosition() + (GetGame().GetCurrentCameraDirection().Normalized()*0.1);
		vector toCenter = fromCenter + ( GetGame().GetCurrentCameraDirection() * ( max_projection_dist + camera_to_player_distance ) );
		vector fromRight = GetGame().GetCurrentCameraPosition() + ( board_breadth * ( m_Projection.GetMemoryPointPos("barricade_right")[0] ) ) + (GetGame().GetCurrentCameraDirection().Normalized()*0.1);
		vector toRight = fromRight + ( GetGame().GetCurrentCameraDirection() * ( max_projection_dist + camera_to_player_distance ) );
		
		vector contact_pos_left = 	fromLeft + 	( GetGame().GetCurrentCameraDirection() * ( max_projection_dist + camera_to_player_distance ) );
		vector contact_pos_center = fromCenter +( GetGame().GetCurrentCameraDirection() * ( max_projection_dist + camera_to_player_distance ) );
		vector contact_pos_right = 	fromRight + ( GetGame().GetCurrentCameraDirection() * ( max_projection_dist + camera_to_player_distance ) );
		vector contact_dir_left 	= "0 0 1";
		vector contact_dir_center 	= "0 0 1";
		vector contact_dir_right 	= "0 0 1";
		
		DayZPhysics.RayCastBullet(fromLeft, toLeft, barricade_mask, m_Projection, NULL, contact_pos_left, contact_dir_left, NULL);
		DayZPhysics.RayCastBullet(fromCenter, toCenter, barricade_mask, m_Projection, NULL, contact_pos_center, contact_dir_center, NULL);
		DayZPhysics.RayCastBullet(fromRight, toRight, barricade_mask, m_Projection, NULL, contact_pos_right, contact_dir_right, NULL);

		if(contact_pos_left[1] < GetGame().SurfaceY(contact_pos_left[0],contact_pos_left[2])) {
			contact_pos_left[1] = GetGame().SurfaceY(contact_pos_left[0],contact_pos_left[2]);
			contact_dir_left = GetGame().SurfaceGetNormal(contact_pos_left[0],contact_pos_left[2]);
			SetIsColliding( true );
		}
		if(contact_pos_right[1] < GetGame().SurfaceY(contact_pos_right[0],contact_pos_right[2])) {
			contact_pos_right[1] = GetGame().SurfaceY(contact_pos_right[0],contact_pos_right[2]);
			contact_dir_right = GetGame().SurfaceGetNormal(contact_pos_right[0],contact_pos_right[2]);
			SetIsColliding( true );
		}
		if(contact_pos_center[1] < GetGame().SurfaceY(contact_pos_center[0],contact_pos_center[2])) {
			contact_pos_center[1] = GetGame().SurfaceY(contact_pos_center[0],contact_pos_center[2]);
			contact_dir_center = GetGame().SurfaceGetNormal(contact_pos_center[0],contact_pos_center[2]);
			SetIsColliding( true );
		}

		vector contact_pos = vector.Lerp(contact_pos_left, contact_pos_right, 0.5);
		vector contact_dir = ( (contact_pos_left-contact_pos_right) * (contact_dir_left+contact_dir_right) ) * (contact_pos_left-contact_pos_right);
		contact_dir.Normalize();

		if(vector.Distance(contact_pos, player.GetPosition()) > 0.02+vector.Distance(contact_pos_center, player.GetPosition())) {
			contact_pos = contact_pos_center;
			contact_dir = contact_dir_center;
		}

		float player_to_projection_distance = vector.Distance( player.GetPosition(), contact_pos );

		if( player_to_projection_distance <= min_projection_dist ) {
			
			vector player_to_projection_vector = contact_pos - player.GetPosition();		  
			player_to_projection_vector.Normalize();
			contact_pos = player.GetPosition() + (player_to_projection_vector * min_projection_dist);
			
		} else if( player_to_projection_distance >= max_projection_dist ) {
			
			contact_pos[1] = Math.Max(contact_pos[1], GetGame().SurfaceY(contact_pos[0],contact_pos[2]));
			SetIsColliding( true );
		}

		contact_dir = contact_dir.Normalized().VectorToAngles();
		contact_dir[2] = contact_dir[2] + m_DefaultOrientation[2];
		vector mat1[3];
		vector mat2[3];
		Math3D.YawPitchRollMatrix( contact_dir, mat1);
		Math3D.YawPitchRollMatrix( Vector(0, -90, 0), mat2);
		Math3D.MatrixMultiply3(mat1, mat2, mat1);
		
		m_Rotation = Math3D.MatrixToAngles(mat1);
		m_Projection.SetOrientation(m_Rotation);
		return contact_pos;
		Print("[Debug] contact_pos = " + contact_pos);
	}
    
    // End of Barricade Functionality.
    override EntityAI PlaceEntity( EntityAI entity_for_placing )
    {    
        ItemBase item_in_hands = ItemBase.Cast( m_Player.GetHumanInventory().GetEntityInHands() );
    
        if ( item_in_hands && item_in_hands.CanMakeGardenplot() )
        {
            Class.CastTo(entity_for_placing, GetGame().CreateObject( m_Projection.GetType(), m_Projection.GetPosition() ));
        }
            
        if( entity_for_placing.CanAffectPathgraph() )
        {        
            entity_for_placing.SetAffectPathgraph( true, false );
            
            GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(GetGame().UpdatePathgraphRegionByObject, 100, false, entity_for_placing);
        }
        
        return entity_for_placing;
    } 
};

static vector MatMulPos(EntityAI obj, vector vec) {
	vector mat[4];
	obj.GetTransform(mat);
	//Custom position transormation. Transform returns an array of collums (not rows as documented) append row4 (0 0 0 1) dynamicly in calculation
	vector col1 = mat[0];
	vector col2 = mat[1];
	vector col3 = mat[2];
	vector col4 = mat[3];
	return Vector( col1[0]*vec[0] + col2[0]*vec[1] + col3[0]*vec[2] +col4[0] , col1[1]*vec[0] + col2[1]*vec[1] + col3[1]*vec[2] +col4[1] , col1[2]*vec[0] + col2[2]*vec[1] + col3[2]*vec[2] +col4[2] );
}