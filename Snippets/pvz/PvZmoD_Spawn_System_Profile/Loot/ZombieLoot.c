/// zombieList_XX : List of zeds categories concerned
/// You can find zombies list in Zombie_Type_All variable in ZombiesCategories.c file
/// if you want set an entier family (all color skin of a zombie type) just replace the "_color" by "_base" in the name

/// item/vest/back/headgearList_XX	  : First entry : All => the zed always loot all the item in the list / 1.0 => 100% chance to loot one item in the list / 0.3 => 30% to loot one item in the list / 2 => loot 2.0 random item in the list / 3.0 => loot 3 random item in the list... / -5 => loot between 1 and 5 item form the list
/// itemList_XX	  : Second entry : 
/// ////////////////////////////// Random 			=> items with random health 
/// ////////////////////////////// Normal/Pristine 	=> items pristine 
/// ////////////////////////////// Worn 			=> items worn
/// ////////////////////////////// Damaged 			=> items damaged 
/// ////////////////////////////// BadlyDamaged 	=> items badly damaged 
/// ////////////////////////////// Ruined 			=> items ruined

/// ////////////////////////////// Stacked 			=> Spawn a stack containing the quantity defined in the first entry of each item in the list.
/// For example : data_Chest001 = { "100","Stacked","AKM","Ammo_22","MoneyRuble25"};
/// => 	1 AKM (just 1 because this item can't be stacked)
/// And	1 stack of 50 Ammo_22 (because the max nbr of Ammo_22 in a stack is 50)
/// And 1 stack of 100 MoneyRuble25 (Total 2500 rubles)
/// Note that if the first entry is negative the stack value will be randomly choose between 1 and the set value.

/// itemList_XX	  : other entries : list of item the zed can loot
/// You can find items names in the types.xml file

////// IF YOU ADD YOUR OWN CONFIGURATIONS, REMEMBER THE FIRST CONFIGURATION MATCHING THE ZOMBIE CONCERNED IS SELECTED 
////// (except "TheOther" which is selected if zombie is not found in any configuration)

//////////////// Default //////////////////////////////////////////////////////////////////////////////////////////////////////////////
ref autoptr TStringArray zombieList_00 	= {"TheOthers",};  /// Zombies that are not in bellow lists
ref autoptr TStringArray itemList_00 	= {"0.05","Random","WaterBottle","SewingKit","CanOpener","Flashlight","Battery9V"};
ref autoptr TStringArray vestList_00 	= {"0.0","Random","",};
ref autoptr TStringArray backList_00 	= {"0.0","Random","",};
ref autoptr TStringArray headgearList_00= {"0.0","Random","",}; 

//////////////// Exceptions (don't modify) //////////////////////////////////////////////////////////////////////////////////////////////////////////////
ref autoptr TStringArray zombieList_01  = {"ZmbM_JournalistSkinny_Base","ZmbF_PatientOld_Base","ZmbM_CitizenASkinny_Base"}; /// DO NOT ADD LOOT (zombie used for PvZmoD Dark Horde)
ref autoptr TStringArray itemList_01 	= {"0.0","Random","",}; 	
ref autoptr TStringArray vestList_01 	= {"0.0","Random","",};
ref autoptr TStringArray backList_01 	= {"0.0","Random","",};
ref autoptr TStringArray headgearList_01= {"0.0","Random","",};

//////////////// Hermits //////////////////////////////////////////////////////////////////////////////////////////////////////////////

ref autoptr TStringArray zombieList_02 	= {"ZmbM_HermitSkinny_Beige",}; /// Crawler if "PvZmoD Customisable Zombies" used
ref autoptr TStringArray itemList_02 	= {"0.5","Ruined","AthleticShoes_Blue","CombatBoots_Grey","HikingBootsLow_Blue","JoggingShoes_Violet","JungleBoots_Brown","Sneakers_Red","Wellies_Brown","WorkingBoots_Yellow",};  
ref autoptr TStringArray vestList_02 	= {"0.1","Pristine","Worm",};  
ref autoptr TStringArray backList_02 	= {"0.9","Ruined","GhillieBushrag_Tan","GhillieSuit_Tan","GhillieTop_Tan","GhillieBushrag_Mossy","GhillieSuit_Mossy","GhillieTop_Mossy","GhillieBushrag_Woodland","GhillieSuit_Woodland","GhillieTop_Woodland","GhillieBushrag_Tan","GhillieBushrag_Mossy","GhillieBushrag_Woodland","GhillieBushrag_Tan","GhillieBushrag_Mossy","GhillieBushrag_Woodland",}; 
ref autoptr TStringArray headgearList_02= {"0.75","Ruined","GhillieHood_Tan","GhillieHood_Mossy","GhillieHood_Woodland",}; /// GhillieHood_Tan (tete) / GhillieBushrag_Tan (epaules) / GhillieTop_Tan (buste) / GhillieSuit_Tan (total)

ref autoptr TStringArray zombieList_03 	= {"ZmbM_HermitSkinny_Base",};
ref autoptr TStringArray itemList_03 	= {"0.15","Pristine","SmallStone","Worm",}; 
ref autoptr TStringArray vestList_03 	= {"0.2","Random","FlatCap_Black","FlatCap_Brown","FlatCap_Grey","BeanieHat_Black","BeanieHat_Brown","BeanieHat_Green","BeanieHat_Grey","BeanieHat_Beige",};
ref autoptr TStringArray backList_03 	= {"0.1","BadlyDamaged","CourierBag",};
ref autoptr TStringArray headgearList_03= {"0.0","Random","",};

//////////////// Hunters //////////////////////////////////////////////////////////////////////////////////////////////////////////////

ref autoptr TStringArray zombieList_04 	= {"ZmbM_HunterOld_Autumn",}; 	/// Hunter at Night time
ref autoptr TStringArray itemList_04 	= {"1.0","Random","Matchbox","Bait","Heatpack","Heatpack","PurificationTablets","Ammo_12gaSlug","Ammo_12gaPellets","Ammo_12gaPellets","Whetstone","Lard","Mackerel","Machete","HuntingKnife","PortableGasLamp","PortableGasStove","Tripod","Compass","Canteen","dzn_map_namalsk",};//"gp_crossbow","gp_Ammo_ArrowBolt","gp_Ammo_ArrowBolt",}; 
ref autoptr TStringArray vestList_04 	= {"0.7","BadlyDamaged","Headtorch_Black","Headtorch_Grey",};
ref autoptr TStringArray backList_04 	= {"0.9","Ruined","GhillieBushrag_Tan","GhillieSuit_Tan","GhillieTop_Tan","GhillieBushrag_Mossy","GhillieSuit_Mossy","GhillieTop_Mossy","GhillieBushrag_Woodland","GhillieSuit_Woodland","GhillieTop_Woodland","GhillieBushrag_Tan","GhillieBushrag_Mossy","GhillieBushrag_Woodland","GhillieBushrag_Tan","GhillieBushrag_Mossy","GhillieBushrag_Woodland",}; 
ref autoptr TStringArray headgearList_04= {"0.75","Ruined","GhillieHood_Tan","GhillieHood_Mossy","GhillieHood_Woodland",}; /// GhillieHood_Tan (tete) / GhillieBushrag_Tan (epaules) / GhillieTop_Tan (buste) / GhillieSuit_Tan (total)

ref autoptr TStringArray zombieList_05 	= {"ZmbM_HunterOld_Base",};  	/// Hunter at Day time
ref autoptr TStringArray itemList_05 	= {"1.0","Random","Matchbox","Bait","Heatpack","Heatpack","PurificationTablets","Ammo_12gaSlug","Ammo_12gaPellets","Ammo_12gaPellets","Whetstone","Lard","Mackerel","Machete","HuntingKnife","PortableGasLamp","PortableGasStove","Tripod","Compass","Canteen","dzn_map_namalsk",};//"gp_crossbow","gp_Ammo_ArrowBolt","gp_Ammo_ArrowBolt",}; 
ref autoptr TStringArray vestList_05 	= {"0.7","Random","Ushanka_Black","Ushanka_Blue","Ushanka_Green"};
ref autoptr TStringArray backList_05 	= {"0.2","Ruined","HuntingBag","HuntingBag","HuntingBag","dzn_ghilliebushragtandark","dzn_ghilliebushragwinter"};
ref autoptr TStringArray headgearList_05= {"0.0","Random",""};

///////////////// Industrial /////////////////////////////////////////////////////////////////////////////////////////////////////////////

ref autoptr TStringArray zombieList_06 	= {"ZmbM_HandymanNormal_Base","ZmbM_OffshoreWorker_Base",}; 				
ref autoptr TStringArray itemList_06 	= {"0.1","SparkPlug","EngineOil","CarBattery","CanisterGasoline","LugWrench",}; 	
ref autoptr TStringArray vestList_06 	= {"0.1","Random","NailBox","NailBox","NailBox","BurlapSack","DuctTape","Hammer","Pliers","SparkPlug","EngineOil","CarBattery","CanisterGasoline","PipeWrench","Pipe","GardenLime"};
ref autoptr TStringArray backList_06 	= {"0.8","Random","WeldingMask","constructionHelmet_Blue","constructionHelmet_Lime","constructionHelmet_Orange","constructionHelmet_Red","constructionHelmet_White","constructionHelmet_Yellow",};
ref autoptr TStringArray headgearList_06= {"0.8","Random","ReflexVest",};

ref autoptr TStringArray zombieList_07 	= {"ZmbF_BlueCollarFat_Base","ZmbM_MechanicSkinny_Base"}; 				
ref autoptr TStringArray itemList_07 	= {"0.1","SparkPlug","EngineOil","CarBattery","CanisterGasoline","LugWrench",}; 	
ref autoptr TStringArray vestList_07 	= {"0.1","Random","Battery9V","NailBox","BurlapSack","DuctTape","Hammer","Pliers","PipeWrench","Pipe",};
ref autoptr TStringArray backList_07 	= {"0.8","Random","WeldingMask","ConstructionHelmet_Blue","ConstructionHelmet_Lime","ConstructionHelmet_Orange","ConstructionHelmet_Red","ConstructionHelmet_White","ConstructionHelmet_Yellow",};
ref autoptr TStringArray headgearList_07= {"0.0","Random","",};

//////////////// FireFighter //////////////////////////////////////////////////////////////////////////////////////////////////////////////

ref autoptr TStringArray zombieList_08 	= {"ZmbM_FirefighterNormal_Base","ZmbM_HeavyIndustryWorker_Base","ZmbM_ParamedicNormal_Black",};  /// Before Medical
ref autoptr TStringArray itemList_08 	= {"0.2","Pristine","LeatherSewingKit","Megaphone","CigarettePack_Partyzanka","Rag","Rag","Rag","Rag","FirefighterAxe","Flaregun","Ammo_Flare","Ammo_FlareRed","Ammo_FlareGreen","Ammo_FlareBlue",}; 
ref autoptr TStringArray vestList_08 	= {"0.1","Random","GP5GasMask",};
ref autoptr TStringArray backList_08 	= {"0.8","Random","FirefightersHelmet_Red","FirefightersHelmet_White","FirefightersHelmet_Yellow",};
ref autoptr TStringArray headgearList_08= {"0.0","Random","",};

//////////////// NBC //////////////////////////////////////////////////////////////////////////////////////////////////////////////

ref autoptr TStringArray zombieList_09 	= {"ZmbM_NBC_Yellow","ZmbM_NBC_Grey",};
ref autoptr TStringArray itemList_09 	= {"0.05","Pristine","AntiChemInjector",};
ref autoptr TStringArray vestList_09 	= {"0.1","Random","GasMask_Filter",};
ref autoptr TStringArray backList_09 	= {"0.0","Random","",}; 
ref autoptr TStringArray headgearList_09= {"0.0","Random","",}; 

//////////////// Medical //////////////////////////////////////////////////////////////////////////////////////////////////////////////

ref autoptr TStringArray zombieList_10 	= {"ZmbF_NurseFat_Base","ZmbM_ParamedicNormal_Base","ZmbF_ParamedicNormal_Base",}; 
ref autoptr TStringArray itemList_10 	= {"0.3","Pristine","BloodTestKit","CharcoalTablets","Rag","SalineBagIV","TetracyclineAntibiotics","Thermometer","VitaminBottle","Epinephrine", "Morphine", "PainkillerTablets", "CharcoalTablets",}; 
ref autoptr TStringArray vestList_10 	= {"0.0","Random","",};
ref autoptr TStringArray backList_10 	= {"0.0","Random","",};
ref autoptr TStringArray headgearList_10= {"0.0","Random","",};

//////////////// School //////////////////////////////////////////////////////////////////////////////////////////////////////////////

ref autoptr TStringArray zombieList_11 	= {"ZmbM_SkaterYoung_Base","ZmbF_JoggerSkinny_Base",}; // school
ref autoptr TStringArray itemList_11 	= {"0.7","Random","BaseballCap_Beige","BaseballCap_Black","BaseballCap_CMMG_Black","BaseballCap_Olive","SkateHelmet_Black","SkateHelmet_Blue","SkateHelmet_Gray","SkateHelmet_Green","SkateHelmet_Red",};
ref autoptr TStringArray vestList_11 	= {"1.0","Random","SportGlasses_Black","SportGlasses_Blue","SportGlasses_Green","SportGlasses_Orange",};
ref autoptr TStringArray backList_11 	= {"0.2","Ruined","ChildBag_Blue","ChildBag_Green","ChildBag_Red",};
ref autoptr TStringArray headgearList_11= {"0.0","Random","",};

//////////////// Police //////////////////////////////////////////////////////////////////////////////////////////////////////////////

ref autoptr TStringArray zombieList_12 	= {"ZmbM_PolicemanFat_Base",}; 
ref autoptr TStringArray itemList_12 	= {"0.3","BadlyDamaged","MakarovIJ70","Mag_IJ70_8Rnd","Mag_IJ70_8Rnd","Mag_IJ70_8Rnd","PoliceBaton","Flaregun"};
ref autoptr TStringArray vestList_12 	= {"0.5","Random","PoliceCap","PoliceCap","PoliceCap","DirtBikeHelmet_Police",};
ref autoptr TStringArray backList_12 	= {"0.5","Random","AviatorGlasses",};
ref autoptr TStringArray headgearList_12= {"0.0","Random","",};

ref autoptr TStringArray zombieList_13 	= {"ZmbF_PoliceWomanNormal_Base",};
ref autoptr TStringArray itemList_13 	= {"0.4","Random","Ammo_22","Ammo_45ACP","Ammo_380","Megaphone","Handcuffs","HandcuffKeys","Handcuffs","HandcuffKeys","MP5_Compensator","PistolOptic","Ammo_Flare","Ammo_FlareRed","Ammo_FlareGreen","Ammo_FlareBlue",};
ref autoptr TStringArray vestList_13 	= {"0.2","Random","PoliceCap","PoliceCap","PoliceCap","DirtBikeHelmet_Police",};
ref autoptr TStringArray backList_13 	= {"0.3","Random","AviatorGlasses",};
ref autoptr TStringArray headgearList_13= {"0.0","Random","",};

ref autoptr TStringArray zombieList_14 	= {"ZmbM_PolicemanSpecForce_Base",}; 
ref autoptr TStringArray itemList_14	= {"0.3","BadlyDamaged","FNX45",};
ref autoptr TStringArray vestList_14 	= {"0.3","BadlyDamaged","PoliceVest",};
ref autoptr TStringArray backList_14 	= {"0.3","Random","GasMask",};
ref autoptr TStringArray headgearList_14= {"0.05","Random","PistolSuppressor",};

/////////////// Military ///////////////////////////////////////////////////////////////////////////////////////////////////////////////

ref autoptr TStringArray zombieList_15 	= {"ZmbM_PatrolNormal_Base","ZmbM_ruSoldier_normal_Woodland1","ZmbM_ruSoldier_normal_Woodland2"}; // Low/Medium Soldiers
ref autoptr TStringArray itemList_15 	= {"0.05","Random","Ammo_45ACP","Ammo_9x19","Ammo_380","Ammo_22","Ammo_12gaPellets","Ammo_12gaSlug","FieldShovel"};
ref autoptr TStringArray vestList_15 	= {"0.1","Random","BaseRadio",};
ref autoptr TStringArray backList_15 	= {"0.3","Random","GP5GasMask",};
ref autoptr TStringArray headgearList_15= {"0.5","Random","Ssh68Helmet","Ssh68Helmet","Ssh68Helmet","ZSh3PilotHelmet_Black","ZSh3PilotHelmet_Green",};

ref autoptr TStringArray zombieList_16 	= {"ZmbM_nacSoldier_normal",}; // High Soldiers
ref autoptr TStringArray itemList_16	= {"0.05","Random","Ammo_308WinTracer","Ammo_556x45Tracer","Ammo_762x54Tracer","Ammo_762x39Tracer","Ammo_9x39AP","Ammo_545x39Tracer",};
ref autoptr TStringArray vestList_16 	= {"0.3","BadlyDamaged","HighCapacityVest_Black","UKAssVest_Black",};
ref autoptr TStringArray backList_16 	= {"0.3","BadlyDamaged","AssaultBag_Black",};
ref autoptr TStringArray headgearList_16= {"1.0","Random","BalaclavaMask_Black","BalaclavaMask_Black","BalaclavaMask_Black","BalaclavaMask_Black","BalaclavaMask_Black","AirborneMask",};

ref autoptr TStringArray zombieList_17 	= {"ZmbM_usSoldier_normal_Woodland","ZmbM_usSoldier_normal_Desert","ZmbM_usSoldier_Officer_Desert",}; // High Officer
ref autoptr TStringArray itemList_17 	= {"0.1","BadlyDamaged","AKM","Mag_AKM_30Rnd","AmmoBox",};
ref autoptr TStringArray vestList_17 	= {"1.0","Random","OfficerHat",};
ref autoptr TStringArray backList_17 	= {"0.5","Random","AviatorGlasses",};
ref autoptr TStringArray headgearList_17= {"0.05","Random","AK_Suppressor","PistolSuppressor",};

ref autoptr TStringArray zombieList_18 	= {"ZmbM_SoldierNormal","ZmbM_usSoldier_Heavy_Woodland",}; // Low/Medium Officer or High Soldier
ref autoptr TStringArray itemList_18 	= {"0.05","Random","Ammo_308Win","Ammo_556x45","Ammo_762x54","Ammo_762x39","Ammo_9x39","Ammo_357","Ammo_545x39","WeaponCleaningKit"};
ref autoptr TStringArray vestList_18 	= {"0.4","BadlyDamaged","PlateCarrierVest", "SmershVest","UKAssVest_Camo","DesignerGlasses",};
ref autoptr TStringArray backList_18 	= {"0.3","BadlyDamaged","AssaultBag_Green","AssaultBag_Ttsko",};
ref autoptr TStringArray headgearList_18= {"1.0","Random","MilitaryBeret_CDF","MilitaryBeret_ChDKZ","MilitaryBeret_NZ","MilitaryBeret_Red","MilitaryBeret_UN",};

/////////////// Specials ///////////////////////////////////////////////////////////////////////////////////////////////////////////////

ref autoptr TStringArray zombieList_19 	= {"ZmbF_DoctorSkinny_Base","ZmbM_ClerkFat_White",};  /// Scientist from Athena project
ref autoptr TStringArray itemList_19 	= {"0.05","Pristine","dzn_athena_planning","dzn_athena_action1","dzn_athena_action2",}; 
ref autoptr TStringArray vestList_19 	= {"0.0","Random","",};
ref autoptr TStringArray backList_19 	= {"0.0","Random","",};
ref autoptr TStringArray headgearList_19= {"0.0","Random","",};

ref autoptr TStringArray zombieList_20 	= {"ZmbF_ShortSkirt_Base",}; 	
ref autoptr TStringArray itemList_20 	= {"0.8","Random","ThinFramesGlasses","ThickFramesGlasses",};
ref autoptr TStringArray vestList_20 	= {"0.0","Random","",};
ref autoptr TStringArray backList_20 	= {"0.0","Random","",};
ref autoptr TStringArray headgearList_20= {"0.0","Random","",};

ref autoptr TStringArray zombieList_21 	= {"ZmbM_CommercialPilotOld_Base",}; 
ref autoptr TStringArray itemList_21 	= {"0.8","Random","AviatorGlasses",};
ref autoptr TStringArray vestList_21 	= {"0.0","Random","",};
ref autoptr TStringArray backList_21 	= {"0.0","Random","",};
ref autoptr TStringArray headgearList_21= {"0.0","Random","",};

ref autoptr TStringArray zombieList_22 	= {"ZmbM_MotobikerFat_Base",};
ref autoptr TStringArray itemList_22 	= {"1.0","Random","BaseballBat","BaseballBat","BaseballBat","NailedBaseballBat","NailedBaseballBat","BaseballBat","BarbedBaseballBat",};
ref autoptr TStringArray vestList_22 	= {"0.0","Random","",};
ref autoptr TStringArray backList_22 	= {"0.0","Random","",};
ref autoptr TStringArray headgearList_22= {"0.0","Random","",};

ref autoptr TStringArray zombieList_23 	= {"ZmbF_CitizenBSkinny",}; /// Because if you use PvZmoD Customisable Zombies she make players bleeding each time she hit them 
ref autoptr TStringArray itemList_23	= {"1.0","BadlyDamaged","Rag",};
ref autoptr TStringArray vestList_23 	= {"0.0","Random","",};
ref autoptr TStringArray backList_23 	= {"0.0","Random","",};
ref autoptr TStringArray headgearList_23= {"0.0","Random","",};

ref autoptr TStringArray zombieList_24 	= {"ZmbM_Santa",}; 
ref autoptr TStringArray itemList_24 	= {"1.0","Random","SantasHat",};
ref autoptr TStringArray vestList_24 	= {"5.0","Random","Marmalade","Bear_Pink","Bear_Beige","Bear_Dark","Bear_White","Orange","GiftBox_Small_1","GiftBox_Small_2","GiftBox_Small_3","GiftBox_Small_4","GiftBox_Medium_1","GiftBox_Medium_1","GiftBox_Medium_1","GiftBox_Large_1","GiftBox_Large_1","GiftBox_Large_1","HumanSteakMeat","HumanSteakMeat","HumanSteakMeat","HumanSteakMeat",};
ref autoptr TStringArray backList_24 	= {"4.0","Random","GiftWrapPaper","GiftWrapPaper","HumanSteakMeat",};
ref autoptr TStringArray headgearList_24= {"0.0","Random","",};

ref autoptr TStringArray zombieList_25 	= {"ZmbM_priestPopSkinny_Base",}; 
ref autoptr TStringArray itemList_25 	= {"1.0","Random","Cannabis","Cannabis","Marmalade","Bear_Pink","BookDeadSouls","Broom"};
ref autoptr TStringArray vestList_25 	= {"1.0","Random","Flag_Chernarus","Flag_Chedaki","Flag_NAPA","Flag_CDF","Flag_Livonia","Flag_Altis","Flag_SSahrani","Flag_NSahrani","Flag_DayZ","Flag_LivoniaArmy","Flag_White","Flag_Bohemia","Flag_APA","Flag_UEC","Flag_Pirates","Flag_Cannibals","Flag_Bear","Flag_Wolf","Flag_BabyDeer","Flag_Rooster","Flag_LivoniaPolice","Flag_CMC","Flag_TEC","Flag_CHEL","Flag_Zenit","Flag_HunterZ","Flag_BrainZ",};
ref autoptr TStringArray backList_25 	= {"0.0","Random","",};
ref autoptr TStringArray headgearList_25= {"0.5","Random","",};

ref autoptr TStringArray zombieList_26 	= {"ZmbM_DoctorFat_Base",}; 
ref autoptr TStringArray itemList_26	= {"10.0","Random","Guts","HumanSteakMeat","Bone",};
ref autoptr TStringArray vestList_26 	= {"0.05","Random","MeatTenderizer",};
ref autoptr TStringArray backList_26 	= {"1.0","Random","HockeyMask",};
ref autoptr TStringArray headgearList_26= {"0.0","Random","",};

/////////////// Zombies that can wear hat ///////////////////////////////////////////////////////////////////////////////////////////////////////////////

ref autoptr TStringArray zombieList_27 	= {"ZmbF_CitizenANormal_Base","ZmbF_ClerkFat_Base","ZmbF_JoggerSkinny_Base","ZmbM_ClerkFat_Base","ZmbM_FishermanOld_Base","ZmbM_HikerSkinny_Base","ZmbM_VillagerOld_Base",};
ref autoptr TStringArray itemList_27 	= {"0.8","BadlyDamaged","Ushanka_Black","Ushanka_Blue","Ushanka_Green","BeanieHat_Beige","BeanieHat_Black","BeanieHat_Blue","BeanieHat_Brown","BeanieHat_Green","BeanieHat_Grey","ZmijovkaCap_Black","ZmijovkaCap_Blue","ZmijovkaCap_Brown","ZmijovkaCap_Green",};
ref autoptr TStringArray vestList_27 	= {"0.05","Random","WaterBottle","SewingKit","CanOpener","Flashlight","Battery9V","PetrolLighter","Lockpick"};
ref autoptr TStringArray backList_27 	= {"0.02","BadlyDamaged","TaloonBag_Blue","TaloonBag_Green","TaloonBag_Orange",};
ref autoptr TStringArray headgearList_27= {"0.0","Random","",};

ref autoptr TStringArray zombieList_28 	= {"ZmbM_Mummy",}; 
ref autoptr TStringArray itemList_28 	= {"20.0","Pristine","Guts","HumanSteakMeat","Bone",};
ref autoptr TStringArray vestList_28 	= {"0.0","Random","",};
ref autoptr TStringArray backList_28 	= {"0.0","Random","",};
ref autoptr TStringArray headgearList_28= {"0.0","Random","",};

/// ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

ref autoptr TStringArray zombieList_29 	= {"","","",}; 				// you can use to create new Z category
ref autoptr TStringArray itemList_29 	= {"0.0","Pristine","",}; 	// you can use to create item list for this category
ref autoptr TStringArray vestList_29 	= {"0.0","Random","",};
ref autoptr TStringArray backList_29 	= {"0.0","Random","",};
ref autoptr TStringArray headgearList_29= {"0.0","Random","",};

ref autoptr TStringArray zombieList_30 	= {"","","",}; 				// you can use to create new Z category
ref autoptr TStringArray itemList_30 	= {"0.0","Pristine","",}; 	// you can use to create item list for this category
ref autoptr TStringArray vestList_30 	= {"0.0","Random","",};
ref autoptr TStringArray backList_30 	= {"0.0","Random","",};
ref autoptr TStringArray headgearList_30= {"0.0","Random","",};


// "GasMask","GP5GasMask",
// "HockeyMask","GreatHelm","NBCHoodGray"
// "Ushanka_Black","Ushanka_Blue","Ushanka_Green",
// "Headtorch_Black","Headtorch_Grey"

// "SportGlasses_Black","SportGlasses_Blue","SportGlasses_Green","SportGlasses_Orange",
// "ThickFramesGlasses","ThinFramesGlasses","AviatorGlasses","DesignerGlasses",




