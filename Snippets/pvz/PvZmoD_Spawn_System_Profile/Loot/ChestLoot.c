///								Spawn Type / Items list

ref autoptr TStringArray data_Chest001 = { "All","Normal","AKM","Mag_AKM_30Rnd", "AK_Suppressor", "AK_Woodbttstck", "AK_WoodHndgrd", "dzn_apsi", "Battery9V" }; // Athena 2 Underground
ref autoptr TStringArray data_Chest002 = { "All","Normal","AKM","Mag_AKM_30Rnd", "AK_Suppressor", "AK_Woodbttstck", "AK_WoodHndgrd", "dzn_apsi", "Battery9V", "dzn_netanyas_log" }; // Submarine
ref autoptr TStringArray data_Chest003 = { "All","Normal","AKM","Mag_AKM_30Rnd", "AK_Suppressor", "AK_Woodbttstck", "AK_WoodHndgrd", "dzn_apsi", "Battery9V" }; // Athena 3 Underground
ref autoptr TStringArray data_Chest004 = { "All","Normal","AntiChemInjector","GasMask_Filter", }; // Toxic zones (v1.14 update)

/// use these line to create your own loot chest configuration
ref autoptr TStringArray data_Chest005 = { "All","Normal","AKM","Mag_AKM_30Rnd", "AK_Suppressor", "AK_Woodbttstck", "AK_WoodHndgrd" }; // not used yet
ref autoptr TStringArray data_Chest006 = { "All","Normal","AKM","Mag_AKM_30Rnd", "AK_Suppressor", "AK_Woodbttstck", "AK_WoodHndgrd" }; // not used yet
ref autoptr TStringArray data_Chest007 = { "All","Normal","AKM","Mag_AKM_30Rnd", "AK_Suppressor", "AK_Woodbttstck", "AK_WoodHndgrd" }; // not used yet
ref autoptr TStringArray data_Chest008 = { "All","Normal","AKM","Mag_AKM_30Rnd", "AK_Suppressor", "AK_Woodbttstck", "AK_WoodHndgrd" }; // not used yet
ref autoptr TStringArray data_Chest009 = { "All","Normal","AKM","Mag_AKM_30Rnd", "AK_Suppressor", "AK_Woodbttstck", "AK_WoodHndgrd" }; // not used yet
ref autoptr TStringArray data_Chest010 = { "All","Normal","AKM","Mag_AKM_30Rnd", "AK_Suppressor", "AK_Woodbttstck", "AK_WoodHndgrd" }; // not used yet
ref autoptr TStringArray data_Chest011 = { "All","Normal","AKM","Mag_AKM_30Rnd", "AK_Suppressor", "AK_Woodbttstck", "AK_WoodHndgrd" }; // not used yet
ref autoptr TStringArray data_Chest012 = { "All","Normal","AKM","Mag_AKM_30Rnd", "AK_Suppressor", "AK_Woodbttstck", "AK_WoodHndgrd" }; // not used yet
ref autoptr TStringArray data_Chest013 = { "All","Normal","AKM","Mag_AKM_30Rnd", "AK_Suppressor", "AK_Woodbttstck", "AK_WoodHndgrd" }; // not used yet
ref autoptr TStringArray data_Chest014 = { "All","Normal","AKM","Mag_AKM_30Rnd", "AK_Suppressor", "AK_Woodbttstck", "AK_WoodHndgrd" }; // not used yet
ref autoptr TStringArray data_Chest015 = { "All","Normal","AKM","Mag_AKM_30Rnd", "AK_Suppressor", "AK_Woodbttstck", "AK_WoodHndgrd" }; // not used yet
ref autoptr TStringArray data_Chest016 = { "All","Normal","AKM","Mag_AKM_30Rnd", "AK_Suppressor", "AK_Woodbttstck", "AK_WoodHndgrd" }; // not used yet
ref autoptr TStringArray data_Chest017 = { "All","Normal","AKM","Mag_AKM_30Rnd", "AK_Suppressor", "AK_Woodbttstck", "AK_WoodHndgrd" }; // not used yet
ref autoptr TStringArray data_Chest018 = { "All","Normal","AKM","Mag_AKM_30Rnd", "AK_Suppressor", "AK_Woodbttstck", "AK_WoodHndgrd" }; // not used yet
ref autoptr TStringArray data_Chest019 = { "All","Normal","AKM","Mag_AKM_30Rnd", "AK_Suppressor", "AK_Woodbttstck", "AK_WoodHndgrd" }; // not used yet
ref autoptr TStringArray data_Chest020 = { "All","Normal","AKM","Mag_AKM_30Rnd", "AK_Suppressor", "AK_Woodbttstck", "AK_WoodHndgrd" }; // not used yet

/// First entry :
/// Spawn Type : "All" => spawn all the items in the chest
/// Spawn Type : "3" => spawn randomly 3 the items in the chest
/// Spawn Type : "-3" 	=> spawn between 1 and 3 items randomly chosen in the list


/// Second entry
/// "Normal" => Nothing special
/// "Stacked" => Spawn a stack containing the quantity defined in the first entry of each item in the list.

/// For example : data_Chest001 = { "100","Stacked","AKM","Ammo_22","MoneyRuble25"};
/// => 	1 AKM (just 1 because this item can't be stacked)
/// And	1 stack of 50 Ammo_22 (because the max nbr of Ammo_22 in a stack is 50)
/// And 1 stack of 100 MoneyRuble25 (Total 2500 rubles)

/// Note that if the first entry is negative the stack value will be randomly choose between 1 and the set value.