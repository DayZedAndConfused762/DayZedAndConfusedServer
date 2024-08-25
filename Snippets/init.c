//Spawn helper function



void SpawnObject( string type, vector position, vector orientation )
{
    auto obj = GetGame().CreateObject( type, position );
    obj.SetPosition( position );
    obj.SetOrientation( orientation );
    obj.SetOrientation( obj.GetOrientation() ); //Collision fix
    obj.Update();
    obj.SetAffectPathgraph( true, false );
    if( obj.CanAffectPathgraph() ) GetGame().GetCallQueue( CALL_CATEGORY_SYSTEM ).CallLater( GetGame().UpdatePathgraphRegionByObject, 100, false, obj );
}




void main()
{




	//INIT WEATHER BEFORE ECONOMY INIT------------------------
	Weather weather = g_Game.GetWeather();

	weather.MissionWeather(false);    // false = use weather controller from Weather.c

	weather.GetOvercast().Set( Math.RandomFloatInclusive(0.4, 0.6), 1, 0);
	weather.GetRain().Set( 0, 0, 1);
	weather.GetFog().Set( Math.RandomFloatInclusive(0.05, 0.1), 1, 0);

	//INIT ECONOMY--------------------------------------
	Hive ce = CreateHive();
	if ( ce )
		ce.InitOffline();


//GetCEApi().ExportProxyData("10240 0 10240", 20480);
//GetCEApi().ExportProxyData( "7500 0 7500", 10000 );  //Center of map, radius of how far to go out and find buildings.


	//DATE RESET AFTER ECONOMY INIT-------------------------
	int year, month, day, hour, minute;
	int reset_month = 9, reset_day = 20;
	GetGame().GetWorld().GetDate(year, month, day, hour, minute);

	if ((month == reset_month) && (day < reset_day))
	{
		GetGame().GetWorld().SetDate(year, reset_month, reset_day, hour, minute);
	}
	else
	{
		if ((month == reset_month + 1) && (day > reset_day))
		{
			GetGame().GetWorld().SetDate(year, reset_month, reset_day, hour, minute);
		}
		else
		{
			if ((month < reset_month) || (month > reset_month + 1))
			{
				GetGame().GetWorld().SetDate(year, reset_month, reset_day, hour, minute);
			}
		}
	}
}

class CustomMission: MissionServer
{	
void SetRandomHealth(EntityAI itemEnt)
{
	int rndHlt = Math.RandomInt(60,100);
	itemEnt.SetHealth("","",rndHlt);
}

override PlayerBase CreateCharacter(PlayerIdentity identity, vector pos, ParamsReadContext ctx, string characterName)
{
	Entity playerEnt = GetGame().CreatePlayer(identity, characterName, pos, 0, "NONE");
	Class.CastTo(m_player, playerEnt);
	GetGame().SelectPlayer(identity, m_player);

	return m_player;
}

override void StartingEquipSetup(PlayerBase player, bool clothesChosen)
{
	player.RemoveAllItems();

	EntityAI itemEnt;
	ItemBase itemBs;

	switch (Math.RandomInt(0, 9)) { 
	case 0:
	// Soldier
	player.GetInventory().CreateInInventory("TTSKOPants");itemBs = ItemBase.Cast(itemEnt);
	player.GetInventory().CreateInInventory("TShirt_Green");itemBs = ItemBase.Cast(itemEnt);
	player.GetInventory().CreateInInventory("CombatBoots_Black");itemBs = ItemBase.Cast(itemEnt);
	player.GetInventory().CreateInInventory("CombatKnife");itemBs = ItemBase.Cast(itemEnt); 
	break; 
	case 1: 
	// Paramedic
	player.GetInventory().CreateInInventory("ParamedicPants_Green");itemBs = ItemBase.Cast(itemEnt); 
	player.GetInventory().CreateInInventory("ParamedicJacket_Green");itemBs = ItemBase.Cast(itemEnt); 
	player.GetInventory().CreateInInventory("SalineBagIV");itemBs = ItemBase.Cast(itemEnt);
	player.GetInventory().CreateInInventory("BandageDressing");itemBs = ItemBase.Cast(itemEnt); 
	break; 
	case 2: 
	// Office worker
	player.GetInventory().CreateInInventory("SlacksPants_Black");itemBs = ItemBase.Cast(itemEnt); 
	player.GetInventory().CreateInInventory("WoolCoat_Black");itemBs = ItemBase.Cast(itemEnt);
	player.GetInventory().CreateInInventory("AthleticShoes_Black");itemBs = ItemBase.Cast(itemEnt);
	player.GetInventory().CreateInInventory("Paper");itemBs = ItemBase.Cast(itemEnt);
	player.GetInventory().CreateInInventory("SodaCan_Cola");itemBs = ItemBase.Cast(itemEnt);
	player.GetInventory().CreateInInventory("ThinFramesGlasses");itemBs = ItemBase.Cast(itemEnt);
	break; 
			case 3: 
	// Biker
	player.GetInventory().CreateInInventory("Jeans_Black");itemBs = ItemBase.Cast(itemEnt);
	player.GetInventory().CreateInInventory("RidersJacket_Black");itemBs = ItemBase.Cast(itemEnt);
	player.GetInventory().CreateInInventory("MotoHelmet_Red");itemBs = ItemBase.Cast(itemEnt);
	player.GetInventory().CreateInInventory("HikingBootsLow_Black");itemBs = ItemBase.Cast(itemEnt);
	player.GetInventory().CreateInInventory("Matchbox");itemBs = ItemBase.Cast(itemEnt);
	player.GetInventory().CreateInInventory("Pipe");itemBs = ItemBase.Cast(itemEnt);
	break; 
			case 4: 
	// Hiker
	player.GetInventory().CreateInInventory("HikingJacket_Red");itemBs = ItemBase.Cast(itemEnt); 
	player.GetInventory().CreateInInventory("CargoPants_Blue");itemBs = ItemBase.Cast(itemEnt);
	player.GetInventory().CreateInInventory("HikingBootsLow_Blue");itemBs = ItemBase.Cast(itemEnt);
	player.GetInventory().CreateInInventory("MountainBag_Blue");itemBs = ItemBase.Cast(itemEnt);
	player.GetInventory().CreateInInventory("Compass");itemBs = ItemBase.Cast(itemEnt);
	player.GetInventory().CreateInInventory("WaterBottle");itemBs = ItemBase.Cast(itemEnt);
	break; 
			case 5: 
	// Cop
	player.GetInventory().CreateInInventory("PoliceJacket");itemBs = ItemBase.Cast(itemEnt);
	player.GetInventory().CreateInInventory("PolicePants");itemBs = ItemBase.Cast(itemEnt);
	player.GetInventory().CreateInInventory("CombatBoots_Grey");itemBs = ItemBase.Cast(itemEnt);
	player.GetInventory().CreateInInventory("Flashlight");itemBs = ItemBase.Cast(itemEnt);
	player.GetInventory().CreateInInventory("Battery9V");itemBs = ItemBase.Cast(itemEnt);
	player.GetInventory().CreateInInventory("PersonalRadio");itemBs = ItemBase.Cast(itemEnt);
	player.GetInventory().CreateInInventory("Apple");itemBs = ItemBase.Cast(itemEnt);
	
	break; 
			case 6: 
	// Lumberjack
	player.GetInventory().CreateInInventory("Shirt_RedCheck");itemBs = ItemBase.Cast(itemEnt);
	player.GetInventory().CreateInInventory("Jeans_Blue");itemBs = ItemBase.Cast(itemEnt);
	player.GetInventory().CreateInInventory("WoodAxe");itemBs = ItemBase.Cast(itemEnt);
	player.GetInventory().CreateInInventory("WorkingBoots_Brown");itemBs = ItemBase.Cast(itemEnt);
	player.GetInventory().CreateInInventory("Ushanka_Green");itemBs = ItemBase.Cast(itemEnt);
	break; 
			case 7: 
	// Hood
	player.GetInventory().CreateInInventory("TrackSuitPants_Black");itemBs = ItemBase.Cast(itemEnt);
	player.GetInventory().CreateInInventory("TrackSuitJacket_Black");itemBs = ItemBase.Cast(itemEnt);
	player.GetInventory().CreateInInventory("AthleticShoes_Black");itemBs = ItemBase.Cast(itemEnt);
	player.GetInventory().CreateInInventory("KitchenKnife");itemBs = ItemBase.Cast(itemEnt);
	player.GetInventory().CreateInInventory("SodaCan_Kvass");itemBs = ItemBase.Cast(itemEnt);
	
	break; 
			case 8: 
	// Fireman
	player.GetInventory().CreateInInventory("FirefighterJacket_Beige");itemBs = ItemBase.Cast(itemEnt);
	player.GetInventory().CreateInInventory("FirefightersPants_Beige");itemBs = ItemBase.Cast(itemEnt);
	player.GetInventory().CreateInInventory("FirefightersHelmet_White");itemBs = ItemBase.Cast(itemEnt);
	player.GetInventory().CreateInInventory("WorkingBoots_Yellow");itemBs = ItemBase.Cast(itemEnt);
	player.GetInventory().CreateInInventory("FirefighterAxe");itemBs = ItemBase.Cast(itemEnt);
	
	break; 
									}
//   Give universal gear
	itemEnt = player.GetInventory().CreateInInventory("Rag");
	itemBs = ItemBase.Cast(itemEnt);
	itemBs.SetQuantity(4);
//		SetRandomHealth(itemEnt);
//		player.GetInventory().CreateInInventory("HuntingKnife");
}
};
Mission CreateCustomMission(string path)
{
return new CustomMission();
}