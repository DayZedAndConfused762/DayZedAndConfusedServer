/// Safe Zone Objects ///

ref autoptr TStringArray safeZoneObjects = {

};

// You can add (or remove) items that generate zombie safe zone
// You can set a part of the class name of the objects if it have different variants

// For example "BarrelHoles" includes "BarrelHoles_Green", "BarrelHoles_Blue", "BarrelHoles_Red", "BarrelHoles_Yellow"
// because their class name contains "BarrelHoles"

// The items you choose MUST HAVE A COLLIDER if not it will not be detected by the system and will not generate a safe zone.


/// -------------------------------------------------------------------------------------------------------------------------- ///

/// Loot Container ///

string lootContainer = "";

// You can change the container in which the static hordes loot spawn