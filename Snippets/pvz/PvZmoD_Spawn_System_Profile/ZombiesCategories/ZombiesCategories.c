/// Here you can create / modify zombies categories (used in ZombiesChooseCategories.c file)

ref autoptr TStringArray Empty = {}; /// Don't modify this one

ref autoptr TStringArray Zombie_Type_Spooky = { // (v1.19)
	"ZmbM_Mummy",	
};
ref autoptr TStringArray Zombie_Type_Santa = { // (v1.15 update)
	"ZmbM_Santa",	
};

/// ////////////// Toxic zones //////////////////
ref autoptr TStringArray Zombie_Type_NBC_Low = { 			// (v1.14 update)
	"ZmbM_NBC_Yellow",	
};
ref autoptr TStringArray Zombie_Type_NBC_Hight = { 			// (v1.14 update)
	"ZmbM_NBC_Grey",	
};

/// ////////////// Countryside //////////////////
ref autoptr TStringArray Zombie_Type_NorthCountryside = { 	// Countryside North
	"ZmbM_HermitSkinny_Black",
	"ZmbM_HermitSkinny_Green",
	"ZmbM_HermitSkinny_Red",
};

ref autoptr TStringArray Zombie_Type_Hunter_Camo = {		// Countryside South
	/// "ZmbM_HunterOld_Autumn", // Only at night
	"ZmbM_HunterOld_Spring",
	"ZmbM_HunterOld_Summer",	
};
ref autoptr TStringArray Zombie_Type_Hunter_Winter = {		// Countryside South
	"ZmbM_HunterOld_Winter",
};

ref autoptr TStringArray Zombie_Type_Hunters = {		// Hunters **
	"ZmbM_HunterOld_Autumn",
	"ZmbM_HunterOld_Spring",
	"ZmbM_HunterOld_Summer",
	"ZmbM_HunterOld_Winter",
};

ref autoptr TStringArray Zombie_Type_Horde_Weak = {			// Countryside East
	"ZmbF_CitizenANormal_Beige",
	"ZmbF_CitizenANormal_Brown",
	"ZmbF_CitizenANormal_Blue",
	"ZmbM_CitizenASkinny_Blue",
	"ZmbM_CitizenASkinny_Brown",
	"ZmbM_CitizenASkinny_Grey",
	"ZmbM_CitizenASkinny_Red",
	"ZmbM_ClerkFat_Brown",
	"ZmbM_ClerkFat_Grey",
	"ZmbM_ClerkFat_Khaki",
	"ZmbF_ClerkFat_Black",
	"ZmbF_ClerkFat_GreyPattern",
	"ZmbF_ClerkFat_BluePattern",
	"ZmbF_ClerkFat_White",
	"ZmbM_HikerSkinny_Blue",
	"ZmbM_HikerSkinny_Green",
	"ZmbM_HikerSkinny_Yellow",
};
ref autoptr TStringArray Zombie_Type_Horde_Strong = {		// Countryside East
	"ZmbM_CommercialPilotOld_Blue",
	"ZmbM_CommercialPilotOld_Olive",
	"ZmbM_CommercialPilotOld_Brown",
	"ZmbM_CommercialPilotOld_Grey",
	"ZmbM_MotobikerFat_Beige",
	"ZmbM_MotobikerFat_Black",
	"ZmbM_MotobikerFat_Blue",
};

/// //////////////////  Towns //////////////////
ref autoptr TStringArray Zombie_Type_SmallTown_Weak = {
	"ZmbF_MilkMaidOld_Beige",
	"ZmbF_MilkMaidOld_Black",
	"ZmbF_MilkMaidOld_Green",
	"ZmbF_MilkMaidOld_Grey",
	
	"ZmbM_FishermanOld_Blue",
	"ZmbM_FishermanOld_Green",
	"ZmbM_FishermanOld_Grey",
	"ZmbM_FishermanOld_Red",
	
	"ZmbF_JournalistNormal_Blue",
	"ZmbF_JournalistNormal_Green",
	"ZmbF_JournalistNormal_Red",
	"ZmbF_JournalistNormal_White",
	
	"ZmbM_JoggerSkinny_Blue",
	"ZmbM_JoggerSkinny_Green",
	"ZmbM_JoggerSkinny_Red",

};
ref autoptr TStringArray Zombie_Type_SmallTown_Strong = {	
	"ZmbM_CitizenBFat_Blue",
	"ZmbM_CitizenBFat_Red",
	"ZmbM_CitizenBFat_Green",
};

ref autoptr TStringArray Zombie_Type_MediumTown_Weak = {
	"ZmbF_MilkMaidOld_Black",
	"ZmbF_MilkMaidOld_Green",
	"ZmbM_FishermanOld_Blue",
	"ZmbM_FishermanOld_Green",
	
	"ZmbM_VillagerOld_Blue",
	"ZmbM_VillagerOld_Green",
	"ZmbM_VillagerOld_White",
	
	"ZmbF_VillagerOld_Blue",
	"ZmbF_VillagerOld_Green",
	"ZmbF_VillagerOld_Red",
	"ZmbF_VillagerOld_White",		
	
	"ZmbM_Jacket_bluechecks",
	"ZmbM_Jacket_greenchecks",
	"ZmbM_Jacket_stripes",	
	
	"ZmbM_CitizenBFat_Blue",
	"ZmbM_CitizenBFat_Red",
	"ZmbM_CitizenBFat_Green",
};
ref autoptr TStringArray Zombie_Type_MediumTown_Strong = {
	"ZmbM_MotobikerFat_Beige",
	"ZmbM_MotobikerFat_Black",
	"ZmbM_MotobikerFat_Blue",
	"ZmbM_CommercialPilotOld_Blue",
	"ZmbF_CitizenBSkinny",};

ref autoptr TStringArray Zombie_Type_BigTown_Weak = {
	"ZmbF_CitizenANormal_Beige",
	"ZmbF_CitizenANormal_Brown",
	"ZmbF_CitizenANormal_Blue",
	"ZmbM_CitizenASkinny_Blue",
	"ZmbM_CitizenASkinny_Brown",
	"ZmbM_CitizenASkinny_Grey",
	"ZmbM_CitizenASkinny_Red",
	"ZmbM_ClerkFat_Brown",
	"ZmbM_ClerkFat_Grey",
	"ZmbM_ClerkFat_Khaki",
	"ZmbF_ClerkFat_Black",
	"ZmbF_ClerkFat_GreyPattern",
	"ZmbF_ClerkFat_BluePattern",
	"ZmbF_ClerkFat_White",
	"ZmbM_HikerSkinny_Blue",
	"ZmbM_HikerSkinny_Green",
	"ZmbM_HikerSkinny_Yellow",
};
ref autoptr TStringArray Zombie_Type_BigTown_Strong = {
	"ZmbM_PolicemanFat",
	"ZmbF_PoliceWomanNormal",
	"ZmbM_PolicemanSpecForce",
	"ZmbM_PolicemanSpecForce_Heavy",
};
ref autoptr TStringArray Zombie_Type_BigTown_Slow = {
	"ZmbM_Jacket_beige",
	"ZmbM_Jacket_black",
	"ZmbM_Jacket_blue",
	"ZmbM_Jacket_bluechecks",
	"ZmbM_Jacket_brown",
	"ZmbM_Jacket_greenchecks",
	"ZmbM_Jacket_grey",
	"ZmbM_Jacket_khaki",
	"ZmbM_Jacket_magenta",
	"ZmbM_Jacket_stripes",
	"ZmbF_ShortSkirt_beige",
	"ZmbF_ShortSkirt_black",
	"ZmbF_ShortSkirt_brown",
	"ZmbF_ShortSkirt_green",
	"ZmbF_ShortSkirt_grey",
	"ZmbF_ShortSkirt_checks",
	"ZmbF_ShortSkirt_red",
	"ZmbF_ShortSkirt_stripes",
	"ZmbF_ShortSkirt_yellow",
};

/// ///////////////// Military ///////////////
ref autoptr TStringArray Zombie_Type_SmallCamp_Weak = {
	"ZmbM_PatrolNormal_PautRev",
	"ZmbM_PatrolNormal_Autumn",
	"ZmbM_PatrolNormal_Flat",
	"ZmbM_PatrolNormal_Summer",
};
ref autoptr TStringArray Zombie_Type_SmallCamp_Strong = {
	"ZmbM_SoldierNormal",
	"ZmbM_usSoldier_Heavy_Woodland",
};

ref autoptr TStringArray Zombie_Type_MediumCamp_Weak = {
	"ZmbM_ruSoldier_normal_Woodland1",
	"ZmbM_ruSoldier_normal_Woodland2",
};
ref autoptr TStringArray Zombie_Type_MediumCamp_Strong = {
	"ZmbM_SoldierNormal",
	"ZmbM_usSoldier_Officer_Desert",
	"ZmbM_usSoldier_Officer_Convoy",
};

ref autoptr TStringArray Zombie_Type_BigCamp_Weak = {
	"ZmbM_nacSoldier_normal",
	"ZmbM_nacSoldier_normal",
	"ZmbM_nacSoldier_normal",
	"ZmbM_SoldierNormal",
};
ref autoptr TStringArray Zombie_Type_BigCamp_Strong = {
	"ZmbM_usSoldier_normal_Woodland",
	"ZmbM_usSoldier_normal_Desert",
	"ZmbM_usSoldier_Heavy_Woodland",
	"ZmbM_usSoldier_Officer_Desert",
	"ZmbM_usSoldier_Officer_Convoy",
};

/// ///////////////// Industrial ///////////////
ref autoptr TStringArray Zombie_Type_Industrial_Weak = {
	"ZmbF_BlueCollarFat_Blue",
	"ZmbF_BlueCollarFat_Green",
	"ZmbF_BlueCollarFat_Red",
	"ZmbF_BlueCollarFat_White",
	"ZmbM_MechanicSkinny_Blue",
	"ZmbM_MechanicSkinny_Grey",
	"ZmbM_MechanicSkinny_Green",
	"ZmbM_MechanicSkinny_Red",
	"ZmbM_HandymanNormal_Beige",
	"ZmbM_HandymanNormal_Blue",
	"ZmbM_HandymanNormal_Green",
	"ZmbM_HandymanNormal_Grey",
	"ZmbM_HandymanNormal_White",
};
ref autoptr TStringArray Zombie_Type_Industrial_Strong = {
	"ZmbM_OffshoreWorker_Green",
	"ZmbM_OffshoreWorker_Orange",
	"ZmbM_OffshoreWorker_Red",
	"ZmbM_OffshoreWorker_Yellow",
	"ZmbM_ParamedicNormal_Black",
	"ZmbM_HeavyIndustryWorker",
	"ZmbM_FirefighterNormal",
};

/// //////////////// Hospital ////////////////
ref autoptr TStringArray Zombie_Type_Hospital_Weak = {
	"ZmbM_PatientSkinny",
	"ZmbF_NurseFat",
};
ref autoptr TStringArray Zombie_Type_Hospital_Strong = {   	// (v1.14 update)
	"ZmbM_ParamedicNormal_Blue",
	"ZmbM_ParamedicNormal_Red",
	"ZmbM_ParamedicNormal_Green",

	"ZmbF_ParamedicNormal_Blue",
	"ZmbF_ParamedicNormal_Red",
	"ZmbF_ParamedicNormal_Green",
	
	"ZmbM_DoctorFat",
	
	"ZmbM_NBC_Yellow",
	"ZmbM_NBC_Grey",
};

/// //////////////// Airfield ////////////////
ref autoptr TStringArray Zombie_Type_Airfield_Weak = {
	"ZmbF_CitizenANormal_Beige",
	"ZmbF_CitizenANormal_Brown",
	"ZmbF_CitizenANormal_Blue",
	"ZmbM_CitizenASkinny_Blue",
	"ZmbM_CitizenASkinny_Brown",
	"ZmbM_CitizenASkinny_Grey",
	"ZmbM_CitizenASkinny_Red",
	"ZmbM_ClerkFat_Brown",
	"ZmbM_ClerkFat_Grey",
	"ZmbM_ClerkFat_Khaki",
	"ZmbF_ClerkFat_Black",
	"ZmbF_ClerkFat_GreyPattern",
	"ZmbF_ClerkFat_BluePattern",
	"ZmbF_ClerkFat_White",
	"ZmbM_HikerSkinny_Blue",
	"ZmbM_HikerSkinny_Green",
	"ZmbM_HikerSkinny_Yellow",
};
ref autoptr TStringArray Zombie_Type_Airfield_Strong = {
	"ZmbM_CommercialPilotOld_Blue",
	"ZmbM_CommercialPilotOld_Olive",
	"ZmbM_CommercialPilotOld_Brown",
	"ZmbM_CommercialPilotOld_Grey",
	
	"ZmbM_CommercialPilotOld_Blue",
	"ZmbM_CommercialPilotOld_Olive",
	"ZmbM_CommercialPilotOld_Brown",
	"ZmbM_CommercialPilotOld_Grey",
	
	"ZmbM_HeavyIndustryWorker",
	"ZmbM_ParamedicNormal_Black",
	"ZmbM_FirefighterNormal",
};

/// //////////////// School ////////////////
ref autoptr TStringArray Zombie_Type_School_Weak = {
	"ZmbM_VillagerOld_Blue",
	"ZmbM_VillagerOld_Green",
	"ZmbM_VillagerOld_White",

	"ZmbF_VillagerOld_Blue",
	"ZmbF_VillagerOld_Green",
	"ZmbF_VillagerOld_Red",
	"ZmbF_VillagerOld_White",

	"ZmbF_HikerSkinny_Blue",
	"ZmbF_HikerSkinny_Grey",
	"ZmbF_HikerSkinny_Green",
	"ZmbF_HikerSkinny_Red",
	
	"ZmbM_JoggerSkinny_Blue",
	"ZmbM_JoggerSkinny_Green",
	"ZmbM_JoggerSkinny_Red",

	"ZmbF_JoggerSkinny_Blue",
	"ZmbF_JoggerSkinny_Brown",
	"ZmbF_JoggerSkinny_Green",
	"ZmbF_JoggerSkinny_Red",
	
	"ZmbM_SkaterYoung_Blue",
	"ZmbM_SkaterYoung_Brown",
	"ZmbM_SkaterYoung_Green",
	"ZmbM_SkaterYoung_Grey",
};
ref autoptr TStringArray Zombie_Type_School_Strong = {
	"ZmbM_CitizenBFat_Blue",
	"ZmbM_CitizenBFat_Red",
	"ZmbM_CitizenBFat_Green",
	
	"ZmbM_MotobikerFat_Beige",
	"ZmbM_MotobikerFat_Black",
	"ZmbM_MotobikerFat_Blue",
};

/// //////////////// Other ////////////////
ref autoptr TStringArray Zombie_Type_Priest = {
	"ZmbM_priestPopSkinny",
};
ref autoptr TStringArray Zombie_Type_Butcher = {
	"ZmbM_DoctorFat",
};

ref autoptr TStringArray Zombie_Type_Ruins = {
	"ZmbM_HermitSkinny_Black",
	"ZmbM_HermitSkinny_Green",
	"ZmbM_HermitSkinny_Red",
	"ZmbF_MilkMaidOld_Beige",
	"ZmbF_MilkMaidOld_Black",
	"ZmbF_MilkMaidOld_Green",
	"ZmbF_MilkMaidOld_Grey",
};
ref autoptr TStringArray Zombie_Type_Isolated = {
	"ZmbM_FishermanOld_Blue",
	"ZmbM_FishermanOld_Green",
	"ZmbM_FishermanOld_Grey",
	"ZmbM_FishermanOld_Red",
};

ref autoptr TStringArray Zombie_Type_FireFighter = {
	"ZmbM_HeavyIndustryWorker",
	"ZmbM_ParamedicNormal_Black",
	"ZmbM_FirefighterNormal",
};
ref autoptr TStringArray Zombie_Type_Scientists = {
	"ZmbM_ClerkFat_White",
	"ZmbF_DoctorSkinny",
	"ZmbF_ShortSkirt_white",
};
ref autoptr TStringArray Zombie_Type_Outpost_Civilians = {
	"ZmbM_HikerSkinny_Blue",
	"ZmbM_HikerSkinny_Green",
	"ZmbM_HikerSkinny_Yellow",
};


/// //////////////// TEST ////////////////
ref autoptr TStringArray TEST = {
	"ZmbM_NBC_Grey",
};

/// //////////////// NBC ////////////////
ref autoptr TStringArray NBC = {
	"ZmbM_NBC_Yellow",
	"ZmbM_NBC_Grey",
};

/// //////////////// Bloodsuckers ////////////////
ref autoptr TStringArray Bloodsucker_Easy = {
	"ZmbM_BloodSucker_normalR",
};
ref autoptr TStringArray Bloodsucker_Medium = {
	"ZmbM_BloodSucker_mediumR",
};
ref autoptr TStringArray Bloodsucker_Hard = {
	"ZmbM_BloodSucker_hardR",
};
ref autoptr TStringArray Bloodsucker_Superhard = {
	"ZmbM_BloodSucker_superhardR",
};


/// //////////////// NAC ////////////////
ref autoptr TStringArray NAC = {
	"ZmbM_nacSoldier_normal",
};



/// ///////////////// ALL /////////////////
// (not used, here just to list all zombies)
ref autoptr TStringArray Zombie_Type_All = {	
	// Naked
	"ZmbM_HermitSkinny_Beige",
	"ZmbM_HermitSkinny_Black",
	"ZmbM_HermitSkinny_Green",
	"ZmbM_HermitSkinny_Red",

	// Skinny
	"ZmbF_CitizenBSkinny",

	"ZmbF_SkaterYoung_Brown",
	"ZmbF_SkaterYoung_Striped",
	"ZmbF_SkaterYoung_Violet",

	"ZmbF_MilkMaidOld_Beige",
	"ZmbF_MilkMaidOld_Black",
	"ZmbF_MilkMaidOld_Green",
	"ZmbF_MilkMaidOld_Grey",

	"ZmbM_PatientSkinny",

	////// Normals
	"ZmbM_FarmerFat_Beige",
	"ZmbM_FarmerFat_Blue",
	"ZmbM_FarmerFat_Brown",
	"ZmbM_FarmerFat_Green",

	"ZmbM_VillagerOld_Blue",
	"ZmbM_VillagerOld_Green",
	"ZmbM_VillagerOld_White",

	"ZmbF_VillagerOld_Blue",
	"ZmbF_VillagerOld_Green",
	"ZmbF_VillagerOld_Red",
	"ZmbF_VillagerOld_White",

	"ZmbF_SurvivorNormal_Blue",
	"ZmbF_SurvivorNormal_Orange",
	"ZmbF_SurvivorNormal_Red",
	"ZmbF_SurvivorNormal_White",

	"ZmbM_FishermanOld_Blue",
	"ZmbM_FishermanOld_Green",
	"ZmbM_FishermanOld_Grey",
	"ZmbM_FishermanOld_Red",

	"ZmbF_CitizenANormal_Beige",
	"ZmbF_CitizenANormal_Brown",
	"ZmbF_CitizenANormal_Blue",

	/// "ZmbM_CitizenASkinny_Blue", //(sound bug if you use Dark Horde mod and Winter Chernarus)
	/// "ZmbM_CitizenASkinny_Brown", //(sound bug if you use Dark Horde mod and Winter Chernarus)
	/// "ZmbM_CitizenASkinny_Grey", //(sound bug if you use Dark Horde mod and Winter Chernarus)
	/// "ZmbM_CitizenASkinny_Red", //(sound bug if you use Dark Horde mod and Winter Chernarus)

	"ZmbM_CitizenBFat_Blue",
	"ZmbM_CitizenBFat_Red",
	"ZmbM_CitizenBFat_Green",

	"ZmbM_HikerSkinny_Blue",
	"ZmbM_HikerSkinny_Green",
	"ZmbM_HikerSkinny_Yellow",

	"ZmbF_HikerSkinny_Blue",
	"ZmbF_HikerSkinny_Grey",
	"ZmbF_HikerSkinny_Green",
	"ZmbF_HikerSkinny_Red",

	/// "ZmbM_JournalistSkinny", //(sound bug if you use Dark Horde mod)

	"ZmbF_JournalistNormal_Blue",
	"ZmbF_JournalistNormal_Green",
	"ZmbF_JournalistNormal_Red",
	"ZmbF_JournalistNormal_White",

	"ZmbM_CommercialPilotOld_Blue",
	"ZmbM_CommercialPilotOld_Olive",
	"ZmbM_CommercialPilotOld_Brown",
	"ZmbM_CommercialPilotOld_Grey",

	"ZmbM_JoggerSkinny_Blue",
	"ZmbM_JoggerSkinny_Green",
	"ZmbM_JoggerSkinny_Red",

	"ZmbF_JoggerSkinny_Blue",
	"ZmbF_JoggerSkinny_Brown",
	"ZmbF_JoggerSkinny_Green",
	"ZmbF_JoggerSkinny_Red",

	"ZmbM_MotobikerFat_Beige",
	"ZmbM_MotobikerFat_Black",
	"ZmbM_MotobikerFat_Blue",

	"ZmbM_SkaterYoung_Blue",
	"ZmbM_SkaterYoung_Brown",
	"ZmbM_SkaterYoung_Green",
	"ZmbM_SkaterYoung_Grey",

	"ZmbF_BlueCollarFat_Blue",
	"ZmbF_BlueCollarFat_Green",
	"ZmbF_BlueCollarFat_Red",
	"ZmbF_BlueCollarFat_White",

	"ZmbM_ClerkFat_Brown",
	"ZmbM_ClerkFat_Grey",
	"ZmbM_ClerkFat_Khaki",
	"ZmbM_ClerkFat_White", // white

	"ZmbF_Clerk_Normal_Blue",
	"ZmbF_Clerk_Normal_White",
	"ZmbF_Clerk_Normal_Green",
	"ZmbF_Clerk_Normal_Red",

	"ZmbF_ClerkFat_Black",
	"ZmbF_ClerkFat_GreyPattern",
	"ZmbF_ClerkFat_BluePattern",
	"ZmbF_ClerkFat_White",

	// Workers - Normals
	"ZmbF_MechanicNormal_Beige",
	"ZmbF_MechanicNormal_Green",
	"ZmbF_MechanicNormal_Grey",
	"ZmbF_MechanicNormal_Orange",

	"ZmbM_MechanicSkinny_Blue",
	"ZmbM_MechanicSkinny_Grey",
	"ZmbM_MechanicSkinny_Green",
	"ZmbM_MechanicSkinny_Red",

	"ZmbM_ConstrWorkerNormal_Beige",
	"ZmbM_ConstrWorkerNormal_Black",
	"ZmbM_ConstrWorkerNormal_Green",
	"ZmbM_ConstrWorkerNormal_Grey",

	"ZmbM_HandymanNormal_Beige",
	"ZmbM_HandymanNormal_Blue",
	"ZmbM_HandymanNormal_Green",
	"ZmbM_HandymanNormal_Grey",
	"ZmbM_HandymanNormal_White",

	//Workers-Strong
	"ZmbM_HeavyIndustryWorker",

	"ZmbM_OffshoreWorker_Green",
	"ZmbM_OffshoreWorker_Orange",
	"ZmbM_OffshoreWorker_Red",
	"ZmbM_OffshoreWorker_Yellow",

	// Medic - Normals
	"ZmbF_DoctorSkinny",
	"ZmbF_NurseFat",
	/// "ZmbF_PatientOld", //(sound bug if you use Dark Horde mod)

	//Medic-Strongs
	"ZmbM_ParamedicNormal_Blue",
	"ZmbM_ParamedicNormal_Green",
	"ZmbM_ParamedicNormal_Red",
	"ZmbM_ParamedicNormal_Black",

	"ZmbF_ParamedicNormal_Blue",
	"ZmbF_ParamedicNormal_Green",
	"ZmbF_ParamedicNormal_Red",

	//Strongs 
	"ZmbM_PrisonerSkinny",
	"ZmbM_FirefighterNormal",

	// Slow
	"ZmbM_Jacket_beige",
	"ZmbM_Jacket_black",
	"ZmbM_Jacket_blue",
	"ZmbM_Jacket_bluechecks",
	"ZmbM_Jacket_brown",
	"ZmbM_Jacket_greenchecks",
	"ZmbM_Jacket_grey",
	"ZmbM_Jacket_khaki",
	"ZmbM_Jacket_magenta",
	"ZmbM_Jacket_stripes",

	"ZmbF_ShortSkirt_beige",
	"ZmbF_ShortSkirt_black",
	"ZmbF_ShortSkirt_brown",
	"ZmbF_ShortSkirt_green",
	"ZmbF_ShortSkirt_grey",
	"ZmbF_ShortSkirt_checks",
	"ZmbF_ShortSkirt_red",
	"ZmbF_ShortSkirt_stripes",
	"ZmbF_ShortSkirt_white",
	"ZmbF_ShortSkirt_yellow",

	// Police
	"ZmbM_PolicemanFat",

	"ZmbF_PoliceWomanNormal",

	"ZmbM_HunterOld_Autumn",
	"ZmbM_HunterOld_Spring",
	"ZmbM_HunterOld_Summer",
	"ZmbM_HunterOld_Winter",

	// Military
	"ZmbM_PolicemanSpecForce",
	"ZmbM_PolicemanSpecForce_Heavy",

	"ZmbM_SoldierNormal",

	"ZmbM_usSoldier_normal_Woodland",
	"ZmbM_usSoldier_normal_Desert",

	"ZmbM_PatrolNormal_PautRev",
	"ZmbM_PatrolNormal_Autumn",
	"ZmbM_PatrolNormal_Flat",
	"ZmbM_PatrolNormal_Summer",

	//Specials
	"ZmbM_DoctorFat",
	"ZmbM_priestPopSkinny",	

	//Bloodsuckers
	"ZmbM_BloodSucker_mediumR",	
	"ZmbM_BloodSucker_hardR",	
	"ZmbM_BloodSucker_superhardR",	
};

