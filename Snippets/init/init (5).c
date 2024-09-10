void main()
{
	//INIT ECONOMY--------------------------------------
	Hive ce = CreateHive();
	if ( ce )
		ce.InitOffline();

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
		if ( itemEnt )
		{
			float rndHlt = Math.RandomFloat( 0.45, 0.65 );
			itemEnt.SetHealth01( "", "", rndHlt );
		}
	}

	override PlayerBase CreateCharacter(PlayerIdentity identity, vector pos, ParamsReadContext ctx, string characterName)
	{
		Entity playerEnt;
		playerEnt = GetGame().CreatePlayer( identity, characterName, pos, 0, "NONE" );
		Class.CastTo( m_player, playerEnt );

		GetGame().SelectPlayer( identity, m_player );

		return m_player;
	}

	override void StartingEquipSetup(PlayerBase player, bool clothesChosen)
	{
		player.RemoveAllItems();
		
		EntityAI itemEnt;
		ItemBase itemBs;
		float rand;

	switch (Math.RandomInt(0, 7)) { 
	
	case 0:
	// Kits0
	player.GetInventory().CreateInInventory("Jeans_Black");itemBs = ItemBase.Cast(itemEnt);
	player.GetInventory().CreateInInventory("Shirt_BlueCheck");itemBs = ItemBase.Cast(itemEnt);
	player.GetInventory().CreateInInventory("AthleticShoes_Black");itemBs = ItemBase.Cast(itemEnt);
	player.GetInventory().CreateInInventory("PersonalRadio");itemBs = ItemBase.Cast(itemEnt);
	player.GetInventory().CreateInInventory("Battery9V");itemBs = ItemBase.Cast(itemEnt);	
	player.GetInventory().CreateInInventory("Apple");itemBs = ItemBase.Cast(itemEnt); 

	break;

	case 1: 
	// Kits1
	player.GetInventory().CreateInInventory("Jeans_Grey");itemBs = ItemBase.Cast(itemEnt);
	player.GetInventory().CreateInInventory("Shirt_RedCheck");itemBs = ItemBase.Cast(itemEnt);
	player.GetInventory().CreateInInventory("AthleticShoes_Brown");itemBs = ItemBase.Cast(itemEnt);
	player.GetInventory().CreateInInventory("Chemlight_Green");itemBs = ItemBase.Cast(itemEnt);	
	player.GetInventory().CreateInInventory("ChernarusMap");itemBs = ItemBase.Cast(itemEnt);	
	player.GetInventory().CreateInInventory("Pear");itemBs = ItemBase.Cast(itemEnt); 
	
	break;
	
	case 2: 
	// Kits2
	player.GetInventory().CreateInInventory("Jeans_Blue");itemBs = ItemBase.Cast(itemEnt);
	player.GetInventory().CreateInInventory("TShirt_Black");itemBs = ItemBase.Cast(itemEnt);
	player.GetInventory().CreateInInventory("AthleticShoes_Green");itemBs = ItemBase.Cast(itemEnt);
	player.GetInventory().CreateInInventory("SmallStone");itemBs = ItemBase.Cast(itemEnt);
	player.GetInventory().CreateInInventory("Chemlight_Blue");itemBs = ItemBase.Cast(itemEnt);	
	player.GetInventory().CreateInInventory("Tomato");itemBs = ItemBase.Cast(itemEnt); 
	
	break; 
	
	case 3: 
	// Kits3
	player.GetInventory().CreateInInventory("Jeans_Grey");itemBs = ItemBase.Cast(itemEnt);
	player.GetInventory().CreateInInventory("TShirt_Green");itemBs = ItemBase.Cast(itemEnt);
	player.GetInventory().CreateInInventory("Sneakers_Gray");itemBs = ItemBase.Cast(itemEnt);
	player.GetInventory().CreateInInventory("Matchbox");itemBs = ItemBase.Cast(itemEnt);
	player.GetInventory().CreateInInventory("Plum");itemBs = ItemBase.Cast(itemEnt); 
	
	break; 
	
	case 4: 
	// Kits4
	player.GetInventory().CreateInInventory("Jeans_BlueDark");itemBs = ItemBase.Cast(itemEnt);
	player.GetInventory().CreateInInventory("TShirt_Grey");itemBs = ItemBase.Cast(itemEnt);
	player.GetInventory().CreateInInventory("Sneakers_Black");itemBs = ItemBase.Cast(itemEnt);
	player.GetInventory().CreateInInventory("Compass");itemBs = ItemBase.Cast(itemEnt);
	player.GetInventory().CreateInInventory("Apple");itemBs = ItemBase.Cast(itemEnt); 
	
	break; 
	
	case 5: 
	// Kits5
	player.GetInventory().CreateInInventory("Jeans_Brown");itemBs = ItemBase.Cast(itemEnt);
	player.GetInventory().CreateInInventory("TShirt_Blue");itemBs = ItemBase.Cast(itemEnt);
	player.GetInventory().CreateInInventory("AthleticShoes_Green");itemBs = ItemBase.Cast(itemEnt);
	player.GetInventory().CreateInInventory("Chemlight_Yellow");itemBs = ItemBase.Cast(itemEnt);	
	player.GetInventory().CreateInInventory("Pear");itemBs = ItemBase.Cast(itemEnt); 
	
	break; 
	
	case 6: 
	// Kits6
	player.GetInventory().CreateInInventory("Jeans_Brown");itemBs = ItemBase.Cast(itemEnt);
	player.GetInventory().CreateInInventory("TShirt_White");itemBs = ItemBase.Cast(itemEnt);
	player.GetInventory().CreateInInventory("AthleticShoes_Black");itemBs = ItemBase.Cast(itemEnt);
	player.GetInventory().CreateInInventory("Battery9V");itemBs = ItemBase.Cast(itemEnt);	
	player.GetInventory().CreateInInventory("Apple");itemBs = ItemBase.Cast(itemEnt); 
	
	break;
									}
//   Give universal gear
	itemEnt = player.GetInventory().CreateInInventory("BandageDressing");
	itemBs = ItemBase.Cast(itemEnt);
	itemBs.SetQuantity(2);
//
}
};
Mission CreateCustomMission(string path)
{
	return new CustomMission();
}