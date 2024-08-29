////////////////////////////////////////////////////////////////////////
// THIS ENABLES DOOR, HATCHES. GATE RAID ONLY!!!!!!!!!!!!!!!!     /////
// THIS ENABLES DOOR, HATCHES. GATE RAID ONLY!!!!!!!!!!!!!!!!	 /////
// THIS ENABLES DOOR, HATCHES. GATE RAID ONLY!!!!!!!!!!!!!!!! 	/////
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgMods
{
	class BBP_Vanilla_Dmg_Doors
	{
		type="mod";
		author="DA CREW";
		name="BBP_Vanilla_Dmg_Doors";
		dir="BBP_Vanilla_Dmg_Doors";
		inputs="BBP_Vanilla_Dmg_Doors/Scripts/Data/Inputs.xml";
		dependencies[]={"Game","World","Mission"};
		class defs
		{
			class gameScriptModule
			{
				value="";
				files[]={"BBP_Vanilla_Dmg_Doors/scripts/Common","BBP_Vanilla_Dmg_Doors/scripts/3_Game"};
			};
			class worldScriptModule
			{
				value="";
				files[]={"BBP_Vanilla_Dmg_Doors/scripts/Common","BBP_Vanilla_Dmg_Doors/scripts/4_World"};
			};
			class missionScriptModule
			{
				value="";
				files[]={"BBP_Vanilla_Dmg_Doors/scripts/Common","BBP_Vanilla_Dmg_Doors/scripts/5_Mission"};
			};
		};
	};
};
class CfgPatches
{
	class BBP_Vanilla_Dmg_Doors
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={"RPC_Scripts","DZ_Characters","DZ_Characters_Backpacks","DZ_Characters_Pants","DZ_Characters_Tops","DZ_Gear_Containers","DZ_Characters_Headgear","DZ_Gear_Camping","DZ_Gear_Crafting","DZ_Gear_Tools","DZ_Animals","DZ_Data"};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class BBP_WALL_BASE;
	
	class BBP_GATE_BASE: BBP_WALL_BASE
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
			};
			class DamageZones
			{
				class BBP_Tier_1
				{
					class Health
					{
						hitpoints=21000; //ONLY EDIT ME
						transferToGlobalCoef=0;
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"DZ\gear\camping\data\fence_pile_of_planks.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"DZ\gear\camping\data\fence_pile_of_planks_worn.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"DZ\gear\camping\data\fence_pile_of_planks_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"DZ\gear\camping\data\fence_pile_of_planks_bdamage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"DZ\gear\camping\data\fence_pile_of_planks_bdamage.rvmat"
								}
							}
						};
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=1;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class Melee
						{
							class Health
							{
								damage=0.64999998;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=50;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"T1"
					};
					fatalInjuryCoef=-1;
				};
				class BBP_Tier_2
				{
					class Health
					{
						hitpoints=10000;//ONLY EDIT ME
						transferToGlobalCoef=0;
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"DZ\gear\camping\data\fence_pile_of_planks.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"DZ\gear\camping\data\fence_pile_of_planks_worn.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"DZ\gear\camping\data\fence_pile_of_planks_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"DZ\gear\camping\data\fence_pile_of_planks_bdamage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"DZ\gear\camping\data\fence_pile_of_planks_bdamage.rvmat"
								}
							}
						};
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=1;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class Melee
						{
							class Health
							{
								damage=0.64999998;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=50;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"T2"
					};
					fatalInjuryCoef=-1;
				};
				class BBP_Tier_3
				{
					class Health
					{
						hitpoints=50000;//ONLY EDIT ME
						transferToGlobalCoef=0;
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"DZ\gear\camping\data\fence_pile_of_planks.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"DZ\gear\camping\data\fence_pile_of_planks_worn.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"DZ\gear\camping\data\fence_pile_of_planks_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"DZ\gear\camping\data\fence_pile_of_planks_bdamage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"DZ\gear\camping\data\fence_pile_of_planks_bdamage.rvmat"
								}
							}
						};
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=1;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class Melee
						{
							class Health
							{
								damage=0.64999998;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=50;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"T3"
					};
					fatalInjuryCoef=-1;
				};
				
				//WALL, GATE, ROOF FLOOR RAID
				class t3_wall_concrete_bricks_2: BBP_Tier_3
				{
					componentNames[]=
					{
						"t3_wall_concrete_bricks_2"
					};
				};
				class t3_wall_concrete_bricks: BBP_Tier_3
				{
					componentNames[]=
					{
						"t3_wall_concrete_bricks"
					};
				};
				class t2_metal: BBP_Tier_2
				{
					componentNames[]=
					{
						"t2_metal"
					};
				};
				class t2_metal_2: BBP_Tier_2
				{
					componentNames[]=
					{
						"t2_metal_2"
					};
				};
				class t1_wall_logs_horizontal: BBP_Tier_1
				{
					componentNames[]=
					{
						"t1_wall_logs_horizontal",
						"t1_wall_logs_horizontal_2"
					};
				};
				class t1_wall_planks: BBP_Tier_1
				{
					componentNames[]=
					{
						"t1_wall_planks"
					};
				};
				//DOOR RAIDING
				class t3_door: BBP_Tier_3
				{
					componentNames[]=
					{
						"t3_door"
					};
				};
				class t2_door: BBP_Tier_2
				{
					componentNames[]=
					{
						"t2_door"
					};
				};
				class t1_door: BBP_Tier_1
				{
					componentNames[]=
					{
						"t1_door"
					};
				};
				class window_bars: BBP_Tier_1
				{
					componentNames[]=
					{
						"window_bars"
					};
				};
				class Wall_Barbedwire_1: BBP_Tier_1
				{
					componentNames[]=
					{
						"wall_barbedwire_1",
						"wall_barbedwire_1_mounted"
					};
					inventorySlots[]=
					{
						"Wall_Barbedwire_1"
					};
					fatalInjuryCoef=-1;
				};
				class Wall_Barbedwire_2: BBP_Tier_1
				{
					componentNames[]=
					{
						"wall_barbedwire_2",
						"wall_barbedwire_2_mounted"
					};
					inventorySlots[]=
					{
						"Wall_Barbedwire_2"
					};
				};
			};
		};
	};
	class BBP_DOOR_BASE: BBP_WALL_BASE
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
			};
			class DamageZones
			{
				class BBP_Tier_1
				{
					class Health
					{
						hitpoints=21000; //ONLY EDIT ME
						transferToGlobalCoef=0;
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"DZ\gear\camping\data\fence_pile_of_planks.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"DZ\gear\camping\data\fence_pile_of_planks_worn.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"DZ\gear\camping\data\fence_pile_of_planks_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"DZ\gear\camping\data\fence_pile_of_planks_bdamage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"DZ\gear\camping\data\fence_pile_of_planks_bdamage.rvmat"
								}
							}
						};
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=1;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class Melee
						{
							class Health
							{
								damage=0.64999998;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=50;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"T1"
					};
					fatalInjuryCoef=-1;
				};
				class BBP_Tier_2
				{
					class Health
					{
						hitpoints=10000;//ONLY EDIT ME
						transferToGlobalCoef=0;
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"DZ\gear\camping\data\fence_pile_of_planks.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"DZ\gear\camping\data\fence_pile_of_planks_worn.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"DZ\gear\camping\data\fence_pile_of_planks_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"DZ\gear\camping\data\fence_pile_of_planks_bdamage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"DZ\gear\camping\data\fence_pile_of_planks_bdamage.rvmat"
								}
							}
						};
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=1;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class Melee
						{
							class Health
							{
								damage=0.64999998;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=50;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"T2"
					};
					fatalInjuryCoef=-1;
				};
				class BBP_Tier_3
				{
					class Health
					{
						hitpoints=50000;//ONLY EDIT ME
						transferToGlobalCoef=0;
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"DZ\gear\camping\data\fence_pile_of_planks.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"DZ\gear\camping\data\fence_pile_of_planks_worn.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"DZ\gear\camping\data\fence_pile_of_planks_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"DZ\gear\camping\data\fence_pile_of_planks_bdamage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"DZ\gear\camping\data\fence_pile_of_planks_bdamage.rvmat"
								}
							}
						};
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=1;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class Melee
						{
							class Health
							{
								damage=0.64999998;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=50;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"T3"
					};
					fatalInjuryCoef=-1;
				};
				//DOOR RAIDING
				class t3_door: BBP_Tier_3
				{
					componentNames[]=
					{
						"t3_door"
					};
				};
				class t2_door: BBP_Tier_2
				{
					componentNames[]=
					{
						"t2_door"
					};
				};
				class t1_door: BBP_Tier_1
				{
					componentNames[]=
					{
						"t1_door"
					};
				};
				class window_bars: BBP_Tier_1
				{
					componentNames[]=
					{
						"window_bars"
					};
				};
				class Wall_Barbedwire_1: BBP_Tier_1
				{
					componentNames[]=
					{
						"wall_barbedwire_1",
						"wall_barbedwire_1_mounted"
					};
					inventorySlots[]=
					{
						"Wall_Barbedwire_1"
					};
					fatalInjuryCoef=-1;
				};
				class Wall_Barbedwire_2: BBP_Tier_1
				{
					componentNames[]=
					{
						"wall_barbedwire_2",
						"wall_barbedwire_2_mounted"
					};
					inventorySlots[]=
					{
						"Wall_Barbedwire_2"
					};
				};
			};
		};
	};
};