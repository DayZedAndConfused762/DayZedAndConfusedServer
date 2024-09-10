//<START>..................................<START>	



//-------[ CAR SPAWNER FUNCTION -NZJOCKO- ]-------



void spawncar( string type, vector position, bool spawnfood, bool spawndrink, bool spawngun, bool spawnmed )



{



	



//can edit arrays BUT if adding to gun array may need xtra code for mags etc



		ref TStringArray foodArray = {"BoxCerealCrunchin","PowderedMilk","Rice","BakedBeansCan_Opened","PeachesCan_Opened","SpaghettiCan_Opened","SardinesCan_Opened","TunaCan_Opened","Apple","Tomato","GreenBellPepper","Zucchini","SlicedPumpkin","Potato","Plum","Pear"};



		ref TStringArray drinkArray = {"SodaCan_Cola","SodaCan_Pipsi","SodaCan_Spite","SodaCan_Kvass","WaterBottle"};



	    ref TStringArray gunArray = {"SKS","Mosin9130","CZ527","FNX45","MP5K","Mp133Shotgun","CZ61","UMP45","MakarovIJ70"};



		 TStringArray medArray = {"SalineBagIV","Epinephrine","BandageDressing"};



        bool allowspawn = true;



// Need to do a better a object check here maybe only check for cars?



		ref array<Object> nearest_objects = new array<Object>;



		ref array<CargoBase> cargo_objects = new array<CargoBase>;



		GetGame().GetObjectsAtPosition3D( position, 15, nearest_objects, cargo_objects );







		//new check if car is spawned



		for (int i = 0; i < nearest_objects.Count(); ++i) {



			if (nearest_objects[i].IsKindOf("CarScript")) {



				allowspawn = false;



			}



		}	



		



		//if (nearest_objects.Count() < 1) {



		if (allowspawn) {	



			



		EntityAI myVeh = EntityAI.Cast(GetGame().CreateObject(type, position, false, true));



		if (type == "OffroadHatchback" || "OffroadHatchback_Blue" || "OffroadHatchback_White")



		{



        myVeh.GetInventory().CreateAttachment("HatchbackWheel");



        myVeh.GetInventory().CreateAttachment("HatchbackWheel");



        myVeh.GetInventory().CreateAttachment("HatchbackWheel");



        myVeh.GetInventory().CreateAttachment("HatchbackWheel");



        myVeh.GetInventory().CreateAttachment("HatchbackWheel");



		if (type == "OffroadHatchback")



		{



        myVeh.GetInventory().CreateAttachment("HatchbackDoors_Driver");



        myVeh.GetInventory().CreateAttachment("HatchbackDoors_CoDriver");



        myVeh.GetInventory().CreateAttachment("HatchbackHood");



		myVeh.GetInventory().CreateAttachment("HatchbackTrunk");



		}



		if (type == "OffroadHatchback_Blue")



		{



        myVeh.GetInventory().CreateAttachment("HatchbackDoors_Driver_Blue");



        myVeh.GetInventory().CreateAttachment("HatchbackDoors_CoDriver_Blue");



        myVeh.GetInventory().CreateAttachment("HatchbackHood_Blue");



		myVeh.GetInventory().CreateAttachment("HatchbackTrunk_Blue");



		}



		



		if (type == "OffroadHatchback_White")



		{



        myVeh.GetInventory().CreateAttachment("HatchbackDoors_Driver_White");



        myVeh.GetInventory().CreateAttachment("HatchbackDoors_CoDriver_White");



        myVeh.GetInventory().CreateAttachment("HatchbackHood_White");



		myVeh.GetInventory().CreateAttachment("HatchbackTrunk_White");



		}



		



		}



		



		if (type == "CivilianSedan" || "CivilianSedan_Wine" || "CivilianSedan_Black")	



		{



		myVeh.GetInventory().CreateAttachment("CivSedanWheel");



        myVeh.GetInventory().CreateAttachment("CivSedanWheel");



        myVeh.GetInventory().CreateAttachment("CivSedanWheel");



        myVeh.GetInventory().CreateAttachment("CivSedanWheel");



		if (type == "CivilianSedan")



		{



        myVeh.GetInventory().CreateAttachment("CivSedanDoors_Driver");



        myVeh.GetInventory().CreateAttachment("CivSedanDoors_CoDriver");



		myVeh.GetInventory().CreateAttachment("CivSedanDoors_BackLeft");



		myVeh.GetInventory().CreateAttachment("CivSedanDoors_BackRight");



        myVeh.GetInventory().CreateAttachment("CivSedanHood");



		myVeh.GetInventory().CreateAttachment("CivSedanTrunk");



		}



		if (type == "CivilianSedan_Wine")



		{



        myVeh.GetInventory().CreateAttachment("CivSedanDoors_Driver_Wine");



        myVeh.GetInventory().CreateAttachment("CivSedanDoors_CoDriver_Wine");



		myVeh.GetInventory().CreateAttachment("CivSedanDoors_BackLeft_Wine");



		myVeh.GetInventory().CreateAttachment("CivSedanDoors_BackRight_Wine");



        myVeh.GetInventory().CreateAttachment("CivSedanHood_Wine");



		myVeh.GetInventory().CreateAttachment("CivSedanTrunk_Wine");



		}



		



		if (type == "CivilianSedan_Black")



		{



        myVeh.GetInventory().CreateAttachment("CivSedanDoors_Driver_Black");



        myVeh.GetInventory().CreateAttachment("CivSedanDoors_CoDriver_Black");



		myVeh.GetInventory().CreateAttachment("CivSedanDoors_BackLeft_Black");



		myVeh.GetInventory().CreateAttachment("CivSedanDoors_BackRight_Black");		



        myVeh.GetInventory().CreateAttachment("CivSedanHood_Black");



		myVeh.GetInventory().CreateAttachment("CivSedanTrunk_Black");



		}



			



		}



		



		



		if (type == "Sedan_02" || "Sedan_02_Red" || "Sedan_02_Grey")	



		{



		myVeh.GetInventory().CreateAttachment("Sedan_02_Wheel");



        myVeh.GetInventory().CreateAttachment("Sedan_02_Wheel");



        myVeh.GetInventory().CreateAttachment("Sedan_02_Wheel");



        myVeh.GetInventory().CreateAttachment("Sedan_02_Wheel");



		if (type == "Sedan_02")



		{



        myVeh.GetInventory().CreateAttachment("Sedan_02_Door_1_1");



        myVeh.GetInventory().CreateAttachment("Sedan_02_Door_2_1");



		myVeh.GetInventory().CreateAttachment("Sedan_02_Door_1_2");



		myVeh.GetInventory().CreateAttachment("Sedan_02_Door_2_2");



        myVeh.GetInventory().CreateAttachment("Sedan_02_Hood");



		myVeh.GetInventory().CreateAttachment("Sedan_02_Trunk");



		}



		if (type == "Sedan_02_Red")



		{



        myVeh.GetInventory().CreateAttachment("Sedan_02_Door_1_1_Red");



        myVeh.GetInventory().CreateAttachment("Sedan_02_Door_2_1_Red");



		myVeh.GetInventory().CreateAttachment("Sedan_02_Door_1_2_Red");



		myVeh.GetInventory().CreateAttachment("Sedan_02_Door_2_2_Red");



        myVeh.GetInventory().CreateAttachment("Sedan_02_Hood_Red");



		myVeh.GetInventory().CreateAttachment("Sedan_02_Trunk_Red");



		}



		



		if (type == "Sedan_02_Grey")



		{



        myVeh.GetInventory().CreateAttachment("Sedan_02_Door_1_1_Grey");



        myVeh.GetInventory().CreateAttachment("Sedan_02_Door_2_1_Grey");



		myVeh.GetInventory().CreateAttachment("Sedan_02_Door_1_2_Grey");



		myVeh.GetInventory().CreateAttachment("Sedan_02_Door_2_2_Grey");		



        myVeh.GetInventory().CreateAttachment("Sedan_02_Hood_Grey");



		myVeh.GetInventory().CreateAttachment("Sedan_02_Trunk_Grey");



		}



			



		}







		if (type == "Hatchback_02" || "Hatchback_02_Black" || "Hatchback_02_Blue")	



		{



		myVeh.GetInventory().CreateAttachment("Hatchback_02_Wheel");



        myVeh.GetInventory().CreateAttachment("Hatchback_02_Wheel");



        myVeh.GetInventory().CreateAttachment("Hatchback_02_Wheel");



        myVeh.GetInventory().CreateAttachment("Hatchback_02_Wheel");



		if (type == "Hatchback_02")



		{



        myVeh.GetInventory().CreateAttachment("Hatchback_02_Door_1_1");



        myVeh.GetInventory().CreateAttachment("Hatchback_02_Door_2_1");



		myVeh.GetInventory().CreateAttachment("Hatchback_02_Door_1_2");



		myVeh.GetInventory().CreateAttachment("Hatchback_02_Door_2_2");



        myVeh.GetInventory().CreateAttachment("Hatchback_02_Hood");



		myVeh.GetInventory().CreateAttachment("Hatchback_02_Trunk");



		}



		if (type == "Hatchback_02_Black")



		{



        myVeh.GetInventory().CreateAttachment("Hatchback_02_Door_1_1_Black");



        myVeh.GetInventory().CreateAttachment("Hatchback_02_Door_2_1_Black");



		myVeh.GetInventory().CreateAttachment("Hatchback_02_Door_1_2_Black");



		myVeh.GetInventory().CreateAttachment("Hatchback_02_Door_2_2_Black");



        myVeh.GetInventory().CreateAttachment("Hatchback_02_Hood_Black");



		myVeh.GetInventory().CreateAttachment("Hatchback_02_Trunk_Black");



		}



		



		if (type == "Hatchback_02_Blue")



		{



        myVeh.GetInventory().CreateAttachment("Hatchback_02_Door_1_1_Blue");



        myVeh.GetInventory().CreateAttachment("Hatchback_02_Door_2_1_Blue");



		myVeh.GetInventory().CreateAttachment("Hatchback_02_Door_1_2_Blue");



		myVeh.GetInventory().CreateAttachment("Hatchback_02_Door_2_2_Blue");		



        myVeh.GetInventory().CreateAttachment("Hatchback_02_Hood_Blue");



		myVeh.GetInventory().CreateAttachment("Hatchback_02_Trunk_Blue");



		}



			



		}		



		



		



        myVeh.GetInventory().CreateAttachment("SparkPlug");



        myVeh.GetInventory().CreateAttachment("EngineBelt");



        myVeh.GetInventory().CreateAttachment("CarRadiator");



        myVeh.GetInventory().CreateAttachment("CarBattery");



        myVeh.GetInventory().CreateAttachment("HeadlightH7");	



		myVeh.GetInventory().CreateAttachment("HeadlightH7");



		



		//Change to spawning in car inventory?



		if (spawnfood)



		{



			myVeh.SpawnEntityOnGroundPos(foodArray.GetRandomElement(), position); 



		}



		if (spawndrink)



		{



			myVeh.SpawnEntityOnGroundPos(drinkArray.GetRandomElement(), position); 



		}



		if (spawnmed)



		{



			myVeh.SpawnEntityOnGroundPos(medArray.GetRandomElement(), position); 	



		}



		



		



		if (spawngun)



		{



		string selectedGun = gunArray.GetRandomElement(); //Random choice



		//"SKS","Mosin9130","CZ527","FNX45","MP5K","Mp133Shotgun","CZ61","UMP45","MakarovIJ70"	



		//string selectedGun = "Mosin9130"; //force choice for testing



		EntityAI myGun = EntityAI.Cast(myVeh.SpawnEntityOnGroundPos(selectedGun, position)); 



		



		if ( selectedGun == "MakarovIJ70")



		{



		myGun.GetInventory().CreateAttachment("PistolSuppressor");



		myVeh.SpawnEntityOnGroundPos("Mag_IJ70_8Rnd", position);



		myVeh.SpawnEntityOnGroundPos("Mag_IJ70_8Rnd", position);



		myVeh.SpawnEntityOnGroundPos("Ammo_380", position);



		}



		



		if ( selectedGun == "UMP45")



		{



		myVeh.SpawnEntityOnGroundPos("Mag_UMP_25Rnd", position);



		myVeh.SpawnEntityOnGroundPos("Ammo_45ACP", position);



		}



		



		if ( selectedGun == "FNX45")



		{



		ItemBase fnxAtt = myGun.GetInventory().CreateAttachment("FNP45_MRDSOptic");



		fnxAtt.GetInventory().CreateAttachment("Battery9V");



		myVeh.SpawnEntityOnGroundPos("Mag_FNX45_15Rnd", position);



		myVeh.SpawnEntityOnGroundPos("Ammo_45ACP", position);



		}



		



		if ( selectedGun == "CZ527")



		{



		myGun.GetInventory().CreateAttachment("HuntingOptic");



		myVeh.SpawnEntityOnGroundPos("Ammo_762x39", position);



		}



			



		if ( selectedGun == "Mp133Shotgun")



		{



		myVeh.SpawnEntityOnGroundPos("Ammo_12gaSlug", position);



		myVeh.SpawnEntityOnGroundPos("Ammo_12gaSlug", position);



		}



		



		if ( selectedGun == "MP5K")



		{



		myGun.GetInventory().CreateAttachment("MP5_RailHndgrd");



		myGun.GetInventory().CreateAttachment("MP5_Compensator");



		myGun.GetInventory().CreateAttachment("MP5k_StockBttstck");



		myVeh.SpawnEntityOnGroundPos("Mag_MP5_30Rnd", position);



		myVeh.SpawnEntityOnGroundPos("Mag_MP5_30Rnd", position);



		}



		



		if ( selectedGun == "SKS")



		{



		myGun.GetInventory().CreateAttachment("PUScopeOptic");



		myVeh.SpawnEntityOnGroundPos("Ammo_762x39", position);



		}



		



		if ( selectedGun == "Mosin9130")



		{



		myGun.GetInventory().CreateAttachment("PUScopeOptic");



		myVeh.SpawnEntityOnGroundPos("Ammo_762x54", position);



		}







		



		if ( selectedGun == "CZ61")



		{



		myVeh.SpawnEntityOnGroundPos("Mag_CZ61_20Rnd", position);



		myVeh.SpawnEntityOnGroundPos("Mag_CZ61_20Rnd", position);



		myVeh.SpawnEntityOnGroundPos("Ammo_380", position);



		}	



			



			



		}



		



		



		auto carfluids = Car.Cast( myVeh );



		carfluids.Fill( CarFluid.FUEL, 1000 );



		carfluids.Fill( CarFluid.OIL, 1000 );



		carfluids.Fill( CarFluid.BRAKE, 1000 );



		carfluids.Fill( CarFluid.COOLANT, 1000 );



		



			



		}







	







}



//<END>..................................<END>











//Spawn helper function



static void SpawnObject(string type, vector position, vector orientation)
{
    auto obj = GetGame().CreateObjectEx(type, position, ECE_SETUP | ECE_UPDATEPATHGRAPH | ECE_CREATEPHYSICS);
    obj.SetPosition(position);
    obj.SetOrientation(orientation);
    obj.SetOrientation(obj.GetOrientation());
    obj.SetFlags(EntityFlags.STATIC, false);
    obj.Update();
	obj.SetAffectPathgraph(true, false);
	if (obj.CanAffectPathgraph()) GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(GetGame().UpdatePathgraphRegionByObject, 100, false, obj);
}






void main()



{



		//Your custom spawned objects












SpawnObject( "bldr_tent_boxwooden", "4875.607910 7.716606 2202.046387", "0.000000 0.000000 0.000000" );



SpawnObject( "bldr_wreck_bulldozer", "4855.681152 9.087331 2240.689941", "0.000000 0.000000 0.000000" );










//kamenka,balota extra tents. balota gas station houses



SpawnObject( "bldr_hbarrier_6m", "1263.932739 6.783570 2422.122803", "0.000000 0.000000 0.000000" );



SpawnObject( "bldr_hbarrier_6m", "1269.533325 6.776289 2422.262939", "0.000000 0.000000 0.000000" );



SpawnObject( "bldr_hbarrier_6m", "1275.125610 6.869320 2422.265625", "0.000000 0.000000 0.000000" );



SpawnObject( "bldr_hbarrier_6m", "1280.770630 6.853560 2422.593018", "0.000000 0.000000 0.000000" );



SpawnObject( "bldr_hbarrier_6m", "1282.955566 6.758585 2437.593018", "90.000000 0.000000 0.000000" );



SpawnObject( "bldr_hbarrier_6m", "1282.952881 6.853457 2426.058105", "90.000000 0.000000 0.000000" );



SpawnObject( "bldr_hbarrier_6m", "1277.272095 6.742249 2447.650635", "0.000000 0.000000 0.000000" );



SpawnObject( "bldr_hbarrier_6m", "1271.830078 6.746222 2447.746094", "0.000000 0.000000 0.000000" );



SpawnObject( "bldr_hbarrier_6m", "1266.301025 6.751861 2447.796387", "0.000000 0.000000 0.000000" );



SpawnObject( "bldr_hbarrier_1m", "1253.709839 6.729467 2448.048096", "0.000000 0.000000 0.000000" );



SpawnObject( "bldr_hbarrier_1m", "1279.866333 6.705699 2451.352539", "0.000000 0.000000 0.000000" );



SpawnObject( "bldr_misc_hedgehog_iron", "1255.384644 7.075523 2415.834717", "0.000000 0.000000 0.000000" );



SpawnObject( "bldr_misc_hedgehog_iron", "1245.658325 6.844575 2426.568604", "0.000000 0.000000 0.000000" );



SpawnObject( "bldr_misc_hedgehog_iron", "1253.904541 6.794574 2454.535889", "0.000000 0.000000 0.000000" );



SpawnObject( "bldr_misc_hedgehog_iron", "1293.507568 6.841175 2428.911621", "0.000000 0.000000 0.000000" );



SpawnObject( "Land_Power_Pole_Wood1_Lamp_Amp", "1270.010010 9.655918 2415.839111", "0.000000 0.000000 0.000000" );



SpawnObject( "bldr_tent_pallets", "1250.817993 6.335219 2429.032227", "0.000000 0.000000 0.000000" );



SpawnObject( "bldr_tent_pallets", "1249.662109 6.333678 2427.270508", "59.999996 0.000000 0.000000" );



SpawnObject( "bldr_roadblock_bags_long", "1260.563599 6.166518 2414.667725", "40.000000 0.000000 0.000000" );



SpawnObject( "Land_HouseBlock_1F3", "5924.683105 14.455013 2182.062744", "-20.000000 0.000000 0.000000" );



SpawnObject( "Land_House_2W02", "5890.350586 14.155231 2173.114502", "160.000000 0.000000 0.000000" );



SpawnObject( "Land_Camp_House_red", "5980.691895 12.576238 2198.664795", "160.000000 0.000000 0.000000" );










//elektro island tent area







SpawnObject( "Land_Power_Station", "11654.155273 3.852535 3362.024414", "0.000000 0.000000 0.000000" );






SpawnObject( "ChristmasTree", "5069.224609375 17.49 2400.8427", "0.000000 0.000000 0.000000" );



SpawnObject( "ChristmasTree_Green", "10474.2802734375 14.33 2381.773", "0.000000 0.000000 0.000000" );



SpawnObject( "ChristmasTree", "13306.6123046875 14.604 6761.5390", "0.000000 0.000000 0.000000" );



SpawnObject( "ChristmasTree_Green", "7523.5673 14.15700 3568.6096", "0.000000 0.000000 0.000000" );




SpawnObject( "Land_Mil_Tent_Big2_4", "1274.820923 8.132804 2439.222168", "0.000000 0.000000 0.000000" );



SpawnObject( "Land_Mil_Tent_Big1_4", "1264.469727 6.153280 2430.569824", "0.000000 0.000000 0.000000" );



SpawnObject( "Land_Mil_Tent_Big1_4", "1276.074829 6.212294 2429.570557", "0.000000 0.000000 0.000000" );



SpawnObject( "Land_Mil_Tent_Big2_4", "1258.432251 8.140640 2439.943604", "0.000000 0.000000 0.000000" );



SpawnObject( "Land_Mil_Tower_Small", "1271.169189 9.878871 2451.439941", "0.000000 0.000000 0.000000" );



SpawnObject( "Land_Mil_Tower_Small", "4902.919434 11.034092 2222.027832", "29.999998 0.000000 0.000000" );



SpawnObject( "Land_Mil_Tower_Small", "4875.229492 11.758496 2239.055908", "29.999998 0.000000 0.000000" );



SpawnObject( "Land_Mil_Tent_Big1_4", "4876.718750 7.997020 2228.648682", "119.999992 0.000000 0.000000" );



SpawnObject( "Land_Mil_Tent_Big1_4", "4868.582520 7.702598 2214.140625", "119.999992 0.000000 0.000000" );



SpawnObject( "Land_Mil_Tent_Big1_4", "4889.741211 7.741622 2220.557129", "119.999992 0.000000 0.000000" );



SpawnObject( "Land_Mil_Tent_Big1_4", "4880.514648 7.373035 2205.949463", "119.999992 0.000000 0.000000" );



SpawnObject( "Land_Mil_Tent_Big3", "4864.171875 7.741805 2193.326660", "29.999998 0.000000 0.000000" );



SpawnObject( "Land_City_FireStation", "4752.363770 8.760956 2575.952148", "-179.999985 0.000000 0.000000" );



SpawnObject( "Land_Mil_Guardhouse2", "4847.837402 11.153448 2580.158936", "-10.000001 0.000000 0.000000" );



SpawnObject( "Land_Mil_Tent_Big1_1", "4862.462402 9.745950 2515.938477", "0.000000 0.000000 0.000000" );



SpawnObject( "Land_Mil_Tent_Big1_1", "4872.117676 9.497766 2551.207520", "0.000000 0.000000 0.000000" );



SpawnObject( "Land_Mil_Tent_Big1_1", "4844.784668 9.307096 2564.624512", "0.000000 0.000000 0.000000" );



SpawnObject( "Land_Mil_Tent_Big2_1", "4885.865723 11.497149 2529.356445", "0.000000 0.000000 0.000000" );



SpawnObject( "Land_Mil_Tent_Big2_1", "4870.632813 11.441567 2497.966553", "0.000000 0.000000 0.000000" );



SpawnObject( "Land_Mil_Tent_Big2_1", "4867.658203 11.560353 2566.165283", "0.000000 0.000000 0.000000" );



SpawnObject( "Land_Mil_Tent_Big2_5", "4884.309082 11.492998 2510.940430", "0.000000 0.000000 0.000000" );



SpawnObject( "Land_Mil_Tent_Big3", "4859.330078 10.888555 2542.703125", "0.000000 0.000000 0.000000" );



SpawnObject( "bldr_mil_guardshed", "4833.677246 10.862244 2546.437988", "29.999998 0.000000 0.000000" );



SpawnObject( "bldr_mil_guardshed", "4844.394043 10.960979 2517.165039", "59.999996 0.000000 0.000000" );



SpawnObject( "Land_Mil_ATC_Small", "5007.414063 19.946209 2527.607178", "50.000004 0.000000 0.000000" );



SpawnObject( "Land_Mil_Barracks2", "4961.131836 11.046027 2579.094238", "140.000000 0.000000 0.000000" );



SpawnObject( "Land_Mil_Barracks2", "4986.522949 10.950942 2554.383057", "140.000000 0.000000 0.000000" );



SpawnObject( "Land_Mil_Barracks5", "5159.621094 14.809422 2340.632324", "-130.000000 0.000000 0.000000" );



SpawnObject( "Land_Mil_Barracks_Round", "5105.729492 10.588394 2413.614258", "50.000004 0.000000 0.000000" );



SpawnObject( "Land_Mil_Barracks_Round", "5114.878418 10.477352 2402.710449", "50.000004 0.000000 0.000000" );



SpawnObject( "Land_Mil_Barracks_Round", "5124.668457 10.528580 2391.750732", "50.000004 0.000000 0.000000" );



SpawnObject( "Land_City_Hospital", "5143.650391 17.001099 2223.372803", "-129.999985 0.000000 0.000000" );



SpawnObject( "Land_Airfield_Hangar_Green", "4913.168457 15.454706 2577.160156", "-40.000000 0.000000 0.000000" );



SpawnObject( "Land_Village_Pub", "8739.680664 10.693256 2390.649902", "65.000000 0.000000 0.000000" );



SpawnObject( "Land_Mil_Tent_Big1_1", "8567.798828 7.030474 2484.168945", "0.000000 0.000000 0.000000" );



SpawnObject( "Land_Mil_Tent_Big1_1", "8587.514648 6.706036 2487.176758", "0.000000 0.000000 0.000000" );



SpawnObject( "Land_Mil_Tent_Big1_1", "8603.056641 6.457069 2489.414795", "0.000000 0.000000 0.000000" );



SpawnObject( "Land_Mil_Tent_Big1_1", "8573.851563 6.834712 2468.394043", "0.000000 0.000000 0.000000" );



SpawnObject( "Land_Mil_Tent_Big1_1", "8589.200195 6.762826 2469.190186", "0.000000 0.000000 0.000000" );



SpawnObject( "Land_Mil_Tent_Big1_1", "8605.749023 6.459675 2474.682129", "0.000000 0.000000 0.000000" );



SpawnObject( "Land_Office1", "8630.173828 10.991259 2419.427979", "-119.999985 0.000000 0.000000" );



SpawnObject( "Land_Mil_Tent_Big2_1", "8315.678711 3.637901 2399.625000", "0.000000 0.000000 0.000000" );



SpawnObject( "Land_Mil_Tent_Big2_1", "8301.766602 6.803185 2440.268311", "0.000000 0.000000 0.000000" );



SpawnObject( "Land_Mil_Tent_Big2_5", "8293.593750 4.373731 2417.066895", "0.000000 0.000000 0.000000" );



SpawnObject( "Land_Mil_Tent_Big3", "8341.433594 3.266116 2404.245605", "0.000000 0.000000 0.000000" );



SpawnObject( "Land_Tisy_Barracks", "7504.378418 10.277354 3552.409180", "-20.000000 0.000000 0.000000" );



SpawnObject( "Land_City_Stand_FastFood", "7574.520020 7.768190 3599.489990", "160.000000 0.000000 0.000000" );



SpawnObject( "Land_City_Stand_Grocery", "7578.359863 7.759310 3551.879883", "-20.000000 0.000000 0.000000" );



SpawnObject( "Land_Mil_Guardhouse1", "13292.605469 8.866461 6917.188477", "160.000000 0.000000 0.000000" );



SpawnObject( "Land_Mil_Airfield_HQ", "13229.156250 12.666901 6671.869629", "-19.999987 0.000000 0.000000" );



SpawnObject( "Land_Mil_GuardShed", "13301.242188 6.737242 6902.607910", "-110.000000 0.000000 0.000000" );



SpawnObject( "Land_Mil_Tent_Big1_2", "13188.431641 5.387524 6572.978516", "0.000000 0.000000 0.000000" );



SpawnObject( "Land_Mil_Tent_Big1_2", "13215.283203 5.173722 6584.352539", "0.000000 0.000000 0.000000" );



SpawnObject( "Land_Mil_Tent_Big1_2", "13226.382813 6.708867 6623.678711", "0.000000 0.000000 0.000000" );



SpawnObject( "Land_Mil_Tent_Big1_4", "13182.417969 5.935702 6595.982910", "0.000000 0.000000 0.000000" );



SpawnObject( "Land_Mil_Tent_Big1_4", "13199.940430 5.369491 6590.168457", "0.000000 0.000000 0.000000" );



SpawnObject( "Land_Mil_Tent_Big1_4", "13206.583984 6.585630 6617.444336", "0.000000 0.000000 0.000000" );



SpawnObject( "Land_Mil_Tent_Big2_5", "13208.914063 8.020096 6603.421875", "0.000000 0.000000 0.000000" );



SpawnObject( "Land_Mil_Tent_Big2_4", "1274.820923 8.132804 2439.222168", "0.000000 0.000000 0.000000" );



SpawnObject( "Land_Mil_Tent_Big1_4", "1264.469727 6.153280 2430.569824", "0.000000 0.000000 0.000000" );



SpawnObject( "Land_Mil_Tent_Big1_4", "1276.074829 6.212294 2429.570557", "0.000000 0.000000 0.000000" );



SpawnObject( "Land_Mil_Tent_Big2_4", "1258.432251 8.140640 2439.943604", "0.000000 0.000000 0.000000" );



SpawnObject( "Land_Mil_Tower_Small", "1271.169189 9.878871 2451.439941", "0.000000 0.000000 0.000000" );



SpawnObject( "Land_Mil_Tower_Small", "4902.919434 11.034092 2222.027832", "29.999998 0.000000 0.000000" );



SpawnObject( "Land_Mil_Tower_Small", "4875.229492 11.758496 2239.055908", "29.999998 0.000000 0.000000" );



SpawnObject( "Land_Mil_Tent_Big1_4", "4876.718750 7.997020 2228.648682", "119.999992 0.000000 0.000000" );



SpawnObject( "Land_Mil_Tent_Big1_4", "4868.582520 7.702598 2214.140625", "119.999992 0.000000 0.000000" );



SpawnObject( "Land_Mil_Tent_Big1_4", "4889.741211 7.741622 2220.557129", "119.999992 0.000000 0.000000" );



SpawnObject( "Land_Mil_Tent_Big1_4", "4880.514648 7.373035 2205.949463", "119.999992 0.000000 0.000000" );



SpawnObject( "Land_Mil_Tent_Big3", "4864.171875 7.741805 2193.326660", "29.999998 0.000000 0.000000" );



SpawnObject( "Land_Mil_GuardTower", "11698.928711 8.587754 3206.570801", "-20.000000 0.000000 0.000000" );



SpawnObject( "Land_Mil_Fortified_Nest_Watchtower", "11432.970703 3.712255 3159.457275", "59.999996 0.000000 0.000000" );



SpawnObject( "Land_Mil_Tent_Big1_1", "11643.600586 2.096231 3217.548584", "0.000000 0.000000 0.000000" );



SpawnObject( "Land_Mil_Tent_Big1_1", "11600.187500 1.972488 3155.410889", "90.000000 0.000000 0.000000" );



SpawnObject( "Land_Mil_Tent_Big1_2", "11616.391602 1.712750 3215.559814", "0.000000 0.000000 0.000000" );



SpawnObject( "Land_Mil_Tent_Big1_2", "11676.476563 1.865923 3221.023193", "0.000000 0.000000 0.000000" );



SpawnObject( "Land_Mil_Tent_Big1_2", "11661.055664 2.000585 3239.608887", "0.000000 0.000000 0.000000" );



SpawnObject( "Land_Mil_Tent_Big1_2", "11626.533203 1.805956 3231.723389", "0.000000 0.000000 0.000000" );



SpawnObject( "Land_Mil_Tent_Big3", "11678.089844 3.400788 3202.334961", "0.000000 0.000000 0.000000" );



SpawnObject( "Land_Mil_Tent_Big3", "11603.585938 3.581647 3196.992920", "-179.999985 0.000000 0.000000" );



SpawnObject( "Land_Mil_Tent_Big1_5", "11712.071289 2.433609 3194.774658", "0.000000 0.000000 0.000000" );



SpawnObject( "Land_Mil_Tent_Big1_5", "11704.607422 2.135967 3226.235352", "0.000000 0.000000 0.000000" );


SpawnObject("bldr_Platform1_Ramp", "8705.195313 6.104723 2424.929443", "-116.533974 -0.000000 -0.000000");
//GetCEApi().ExportProxyData( "7500 0 7500", 10000 );  //Center of map, radius of how far to go out and find buildings.































//INIT WEATHER BEFORE ECONOMY INIT------------------------







	Weather weather = g_Game.GetWeather();



 



    weather.MissionWeather(true);    // false = use weather controller from Weather.c



 



    weather.GetRain().SetLimits( 0.0 , 0.0 );



    weather.GetOvercast().SetLimits( 0.0 , 0.0 );



    weather.GetFog().SetLimits( 0.0 , 0.01 );



 



    weather.GetOvercast().SetForecastChangeLimits( 0.0, 0.1 );



    weather.GetRain().SetForecastChangeLimits( 0.0, 0.0 );



    weather.GetFog().SetForecastChangeLimits( 0.0, 0.0 );



 



    weather.GetOvercast().SetForecastTimeLimits( 1800 , 1800 );



    weather.GetRain().SetForecastTimeLimits( 600 , 600 );



    weather.GetFog().SetForecastTimeLimits( 1800 , 1800 );



 



    weather.GetOvercast().Set( Math.RandomFloatInclusive(0.0, 0.3), 0, 0);



    weather.GetRain().Set( Math.RandomFloatInclusive(0.0, 0.0), 0, 0);



    weather.GetFog().Set( Math.RandomFloatInclusive(0.0, 0.1), 0, 0);



 



    weather.SetWindMaximumSpeed(15);



    weather.SetWindFunctionParams(0.1, 0.3, 50);







	//INIT ECONOMY--------------------------------------



	Hive ce = CreateHive();



	if ( ce )



		ce.InitOffline();



	

// GetCEApi().ExportProxyData(Vector(7500, GetGame().SurfaceY(7500, 7500), 7500), 20000);








	







//<START>..................................<START>	



//-------[ CAR SPAWNER FUNCTION -NZJOCKO- ]-------



//



//-SUPPORTED CAR TYPES-	 



//"OffroadHatchback" "OffroadHatchback_Blue" "OffroadHatchback_White"



//"CivilianSedan"  "CivilianSedan_Wine"  "CivilianSedan_Black"



//"Sedan_02"  "Sedan_02_Red"  "Sedan_02_Grey"



//"Hatchback_02" "Hatchback_02_Black" "Hatchback_02_Blue"



//	



//-OPTIONS- [true|flase]	



//spawnfood, spawndrink, spawngun, spawnmed



//	



//-FORMAT-	



// spawncar("TYPE","POSITION",SPAWNFOOD,SPAWNDRINK,SPAWNGUN,SPAWNMED)	



//



// maybe add random postion finder		



//----RANDOM CAR & LOOT SPAWN-----------



ref TVectorArray posArray = {



	



"13378.400391 13.593865 5354.807617",



"13377.716797 13.615818 5399.776855",



"13377.977539 13.403805 5474.424805",



"13384.493164 13.775370 5592.401367",



"13400.566406 13.086131 5737.411133",



"13402.302734 13.042225 5862.562500",



"13423.070313 13.380334 5918.410156",



"13437.546875 13.543036 6039.528320",



"13462.195313 13.841402 6238.553223",



"13458.839844 13.629889 6304.648438",



"13458.139648 13.438540 6388.108887",



"13411.912109 11.854989 6577.077148",



"13398.323242 12.017178 6624.640137",



"13305.069336 13.785369 6911.054688",



"13223.308594 14.028213 7109.537109",



"13112.709961 13.840961 7323.310547",



"13070.388672 13.650106 7474.458496",



"13046.087891 13.295677 7706.354980",



"13054.078125 13.389065 7879.652344",



"13029.888672 13.393518 8043.809082",



"13030.575195 13.024841 8179.512207",



"12969.327148 13.630613 8376.537109",



"12878.361328 13.428210 8600.958008",



"12826.874023 13.640017 8905.519531",



"12837.111328 13.788157 9118.408203",



"12892.862305 14.024980 9359.450195",



"12917.668945 13.726631 9500.704102",



"12938.987305 13.720031 9731.149414",



"12933.824219 13.975368 9622.827148",



"12981.100586 13.725368 9940.872070",



"13010.642578 13.771626 10092.137695",



"13045.556641 13.725368 10168.349609",



"13069.584961 13.705369 10275.333008",



"13115.291016 13.715368 10372.708008",



"13136.167969 13.715368 10464.437500",



"13315.009766 12.930610 10830.304688",



"13486.001953 18.132900 11155.740234",



"13597.342773 19.891787 11441.316406",



"13556.083008 40.944126 11722.144531",



"13748.042969 31.776249 11902.288086",



"13942.803711 22.016745 12061.898438",



"14016.227539 21.076069 12459.113281",



"13406.806641 13.669063 5167.066895",



"13457.603516 13.678348 4941.940430",



"13500.058594 13.175369 4833.057617",



"13480.140625 13.931520 4465.391113",



"13388.028320 14.152663 4161.603027",



"13265.280273 13.147535 4018.677734",



"13110.897461 12.345148 3885.845947",



"13004.620117 13.558879 3803.738770",



"12828.891602 13.721838 3691.691895",



"12677.934570 17.219028 3612.846436",



"12474.954102 14.500712 3535.997314",



"12397.681641 13.881529 3537.766602",



"12251.086914 13.344837 3517.833252",



"12097.717773 13.919704 3488.500977",



"12053.749023 13.812867 3492.400879",



"11926.049805 13.960073 3463.755615",



"11794.273438 13.860085 3453.125488",



"11619.164063 13.259303 3393.057129",



"11309.750000 13.886429 3290.006104",



"11456.541016 13.503228 3361.583496",



"11182.081055 13.798353 3215.838623",



"11063.112305 13.924171 3065.717529",



"10934.022461 13.905682 2903.679443",



"10878.000977 13.725368 2714.633789",



"10880.433594 13.664233 2755.444580",



"10828.401367 13.553866 2566.842041",



"10777.967773 13.724751 2581.930176",



"10731.032227 14.482494 2473.650146",



"10684.890625 14.156656 2461.118896",



"10581.369141 13.725368 2390.803711",



"10600.503906 13.715368 2308.842041",



"10467.498047 13.732040 2379.507080",



"10556.876953 14.102830 2207.568115",



"10444.402344 13.725368 2112.367188",



"10415.811523 13.725368 2176.535645",



"10343.572266 13.532728 2177.857178",



"10387.782227 13.724998 2357.667480",



"10470.192383 13.725368 2298.451416",



"10253.264648 13.663191 2129.212891",



"10162.532227 13.656370 2118.527100",



"10102.478516 13.501806 2102.703369",



"10011.188477 13.725368 2062.002197",



"9866.813477 13.739872 2038.681519",



"10039.605469 13.735369 1949.058838",



"9719.445313 13.844351 2019.525024",



"9623.361328 14.098691 2035.961548",



"9509.885742 13.219825 2023.745361",



"9478.249023 13.436851 2011.161621",



"9387.729492 14.942156 2065.137695",



"9221.975586 13.841501 2053.839844",



"9071.189453 15.140113 2105.837891",



"8998.046875 15.230686 2171.033936",



"8782.011719 14.754785 2294.450195",



"8884.301758 15.718011 2253.903809",



"8722.939453 14.604044 2400.179199",



"8670.707031 14.359440 2478.039551",



"8607.737305 22.631315 2617.831055",



"8509.970703 19.024900 2780.803711",



"8434.777344 21.148914 2862.580078",



"8368.125977 21.633272 2998.538086",



"8314.220703 18.325037 3043.736816",



"8211.693359 13.931085 3088.149902",



"8590.668945 21.535126 2653.411621",



"8108.298340 14.037168 3145.720215",



"8024.704590 14.332909 3158.549316",



"7946.879883 14.633928 3182.901611",



"7760.607422 11.810726 3166.652344",



"7794.770508 12.383276 3183.120850",



"7578.311523 13.981759 3155.165771",



"7477.080566 14.341011 3172.748291",



"7365.393066 23.175081 3170.652832",



"7004.773926 15.745676 3173.125244",



"6969.028809 15.426296 3122.587646",



"6909.992188 15.005369 3085.891602",



"6868.997559 15.025370 3066.114502",



"6751.591309 15.580328 3029.134277",



"6575.273438 21.722406 3041.955811",



"6582.219238 17.068005 2938.783447",



"6488.060547 16.415369 2879.222900",



"6413.418457 17.045368 2744.479980",



"6349.077148 16.911804 2761.434082",



"6270.419434 15.995369 2673.292236",



"6255.062988 16.005369 2626.156250",



"6281.038574 16.540493 2568.661621",



"6263.507324 16.671968 2495.310547",



"6221.658203 18.816265 2378.547852",



"6279.922363 16.978565 2396.435547",



"6682.815430 17.202610 3026.992188",



"6538.452148 15.987349 2933.576416"







};



ref TBoolArray boolArray = {true,false};



ref TStringArray carArray = {"OffroadHatchback","OffroadHatchback_Blue","OffroadHatchback_White","CivilianSedan","CivilianSedan_Wine","CivilianSedan_Black","Sedan_02_Grey","Sedan_02","Sedan_02_Red","Hatchback_02","Hatchback_02_Blue","Hatchback_02_Black"};











//spawning every car with random chance of loot



	for ( int i = 0; i < posArray.Count(); ++i )



		{



			//spawncar(carArray.GetRandomElement(), posArray.Get(i),true,true,true,true);



			//spawn all pos candom car random chance of loot types



			spawncar(carArray.GetRandomElement(), posArray.Get(i),boolArray.GetRandomElement(),boolArray.GetRandomElement(),boolArray.GetRandomElement(),boolArray.GetRandomElement());



		}







//--------------------------------------



//---SET CAR & LOOT SPAWN---------------



//spawncar("Hatchback_02_Blue", "12010.000000 145.675003 12511.099609",true,true,true,true);



//spawncar("OffroadHatchback", "12010.000000 145.675003 12511.099609",false,false,true,false);	



//spawncar(carArray.GetRandomElement(), "5064.339844 17.157200 2394.250000",true,true,true,true);



//spawncar(carArray.GetRandomElement(), "10466.905273 13.731251 2379.298340",true,true,true,true);



//spawncar(carArray.GetRandomElement(), "7527.672852 13.727050 3563.755371",true,true,true,true);



//spawncar(carArray.GetRandomElement(), "13303.094727 14.306023 6755.385254",true,true,true,true);



//spawncar(carArray.GetRandomElement(), "10685.333984 14.115663 2460.562988",true,true,true,true);



//spawncar(carArray.GetRandomElement(), "10581.024414 13.725368 2391.847900",true,true,true,true);



//spawncar(carArray.GetRandomElement(), "10730.566406 14.482880 2473.381104",true,true,true,true);



//spawncar(carArray.GetRandomElement(), "10525.765625 13.725368 2252.337158",true,true,true,true);



//spawncar(carArray.GetRandomElement(), "10331.084961 13.515369 2159.247559",true,true,true,true);



//spawncar(carArray.GetRandomElement(), "10385.747070 13.737221 2352.013428",true,true,true,true);



//spawncar(carArray.GetRandomElement(), "10449.214844 13.725368 2111.314697",true,true,true,true);



//spawncar(carArray.GetRandomElement(), "10448.708984 13.715824 2419.765869",true,true,true,true);



//spawncar(carArray.GetRandomElement(), "10600.845703 13.715368 2310.001709",true,true,true,true);



//--------------------------------------	



//<END>..................................<END>	



	



	











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



			int rndHlt = Math.RandomInt(55,100);



			itemEnt.SetHealth("","",rndHlt);



		}



	}







	override void StartingEquipSetup(PlayerBase player, bool clothesChosen)



	{



	    player.RemoveAllItems();



		player.GetInventory().CreateInInventory("CargoPants_Beige");



		player.GetInventory().CreateInInventory("CZ527");



		player.GetInventory().CreateInInventory("Mag_CZ527_5rnd");



		player.GetInventory().CreateInInventory("Mag_CZ527_5rnd");



		player.GetInventory().CreateInInventory("Mag_CZ527_5rnd");



	    player.GetInventory().CreateInInventory("Hoodie_Brown");



		player.GetInventory().CreateInInventory("Rag");



		player.GetInventory().CreateInInventory("AthleticShoes_Black");



		player.GetInventory().CreateInInventory("Battery9V");



		player.GetInventory().CreateInInventory("WaterBottle");



		player.GetInventory().CreateInInventory("SpaghettiCan");



		player.GetInventory().CreateInInventory("HuntingKnife");



	    player.GetInventory().CreateInInventory("M67Grenade");



		player.GetInventory().CreateInInventory("Mag_IJ70_8Rnd");



		player.GetInventory().CreateInInventory("BaseballCap_Black");



		player.GetInventory().CreateInInventory("ChernarusMap");



		player.GetInventory().CreateInInventory("MakarovIJ70");



		



	}



	



	







};











Mission CreateCustomMission(string path)



{



	return new CustomMission();



}