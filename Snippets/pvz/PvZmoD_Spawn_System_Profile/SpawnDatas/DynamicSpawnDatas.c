///  									NUMCONFIG	TIMEmini     TIMEmaxi	NBRmini		NBRmaxi		DISTANCE	AREA RADIUS 	Lateral SHIFT 	numChooseZombiesCategorie   
ref autoptr TIntArray data_Suspended =		{ 0,		1000,		1000,		0,			0,			100,		3,				0,					1 };			// 0 Suspended (don't modify this line)   
ref autoptr TIntArray data_CountrySide =	{ 1,		1000,		1000,		0,			0,			100,		3,				0,					1 };			// 1 DEFAULT (Outside any dynamic zones)

ref autoptr TIntArray data_SmallTwon =		{ 10,		0,			0,			0,			0,			0,			0,				0,					0 };			// 10 (Not used)
ref autoptr TIntArray data_AverageTown =	{ 20,		0,			0,			0,			0,			0,			0,				0,					0 };			// 20 (Not used)
ref autoptr TIntArray data_BigTown =		{ 30,		20,			25,			5,			9,			100,		10,				30,					30 };			/// 30 Big Town
ref autoptr TIntArray data_Building =		{ 40,		15,			20,			2,			3,			100,		5,				30,					40 };			/// 40 Medium Town / Industrial
ref autoptr TIntArray data_Industial =		{ 50,		15,			20,			3,			4,			100,		5,				30,					50 };			/// 50 Industial
ref autoptr TIntArray data_Military =		{ 60,		0,			0,			0,			0,			0,			0,				0,					0 };			// 60 (Not used)  (always focus)
ref autoptr TIntArray data_Fog =			{ 70,		30,			60,			1,			2,			200,		20,				30,					70 };			/// 70 Countyside North
ref autoptr TIntArray data_Prison =			{ 71,		300,		600,		30,			35,			300,		10,				50,					71 };			/// 71 Countyside East (always focus)
ref autoptr TIntArray data_Marines =		{ 72,		150,		300,		1,			2,			300,		2,				10,					72 };			/// 72 Countyside South
ref autoptr TIntArray data_Bridge =			{ 73,		0,			0,			0,			0,			0,			0,				0,					0 };			// 73 (Not used)

/// Here you can configure your custom dynamic spawn types
ref autoptr TIntArray data_Config90 =		{ 90,		0,			0,			0,			0,			0,			0,				0,					0 };			// 90 (Not used)
ref autoptr TIntArray data_Config91 =		{ 91,		0,			0,			0,			0,			0,			0,				0,					0 };			// 91 (Not used)
ref autoptr TIntArray data_Config92 =		{ 92,		0,			0,			0,			0,			0,			0,				0,					0 };			// 92 (Not used)
ref autoptr TIntArray data_Config93 =		{ 93,		0,			0,			0,			0,			0,			0,				0,					0 };			// 93 (Not used)
ref autoptr TIntArray data_Config94 =		{ 94,		0,			0,			0,			0,			0,			0,				0,					0 };			// 94 (Not used)
ref autoptr TIntArray data_Config95 =		{ 95,		0,			0,			0,			0,			0,			0,				0,					0 };			// 95 (Not used)
ref autoptr TIntArray data_Config96 =		{ 96,		0,			0,			0,			0,			0,			0,				0,					0 };			// 96 (Not used)
ref autoptr TIntArray data_Config97 =		{ 97,		0,			0,			0,			0,			0,			0,				0,					0 };			// 97 (Not used)
ref autoptr TIntArray data_Config98 =		{ 98,		0,			0,			0,			0,			0,			0,				0,					0 };			// 98 (Not used)
ref autoptr TIntArray data_Config99 =		{ 99,		7,			10,			2,			3,			80,			10,				40,					99 };			// 99 Toxic zones (always focus) (v1.14 update)
///  									NUMCONFIG	TIMEmini     TIMEmaxi	NBRmini		NBRmaxi		DISTANCE	AREA RADIUS 	Lateral SHIFT 	numChooseZombiesCategorie  

// //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/// look at ZombiesChooseCategories.c to choose numChooseZombiesCategorie number (use the number who is instead XXX of data_Horde_XXX_ZombiesCategories variable name)

// //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/// Variable name : Don't care about variable name to learn which type zone is concern but look at the comment at the end of the line (I should have all named them "data_ConfigXX" but now it is too late)

/// NUMCONFIG 	: !! don't modify !! it is used in ZombiesDynamicSpawnZones.c file

/// TIMEmini 		: Minumun Time (in seconds) between each dynamic spawn.    
/// TIMEmaxi 		: Maximum Time (in seconds) between each dynamic spawn.    
/// !!! if value "6" (coast factor) of RealTimeTweaks.json file is not set to 0, remember than the time here correspond to the extreme north west of the map  
/// For example if value "6" is set to 10 and you set time here to 20 seconds the real time on the coast will be around 32 seconds (10 correspond to +12 seconds on the coast)

/// NBRmini		: Minimum number of Z to spawn (!! this number will be multiply by the ratio "3" of the RealTimeTweaks.json file (if "3" = 50 => quantity spawned will be 50%, so you need double the quantities)
/// NBRmaxi		: Maximum number of Z to spawn (!! this number will be multiply by the ratio "3" of the RealTimeTweaks.json file (if "3" = 50 => quantity spawned will be 50%, so you need double the quantities)

/// DISTANCE	  : Distance to which the group spawn (!! must not be lower than 60 !!)
/// AREA RADIUS	  : The size of the zone in which the zeds will spawn
/// Lateral SHIFT : 0 => The group will spawn in front of the player, 10 => The group will spawn with a random lateral shift between 0 and 10 meters

/// numChooseZombiesCategorie : Choose the type of zombie to spawn (see ZombiesChooseCategories.c file and look for the number in variable name. For exemple variable name data_Horde_102_CastelCategories, 102 is the number to spawn Castle zeds categorie)
