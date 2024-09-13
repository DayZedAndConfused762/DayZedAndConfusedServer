<!-- ======================================== CHANGELOG-CHERNARUS.md Start ======================================== -->


<!-- ------------------------------ Intro Start ------------------------------ -->

# DayZedAndConfused Chernarus ChangeLog

<!-- ------------------------------ Intro End ------------------------------ -->


<!-- ------------------------------ Overview Start ------------------------------ -->

## Contents:

- [9/13/2024](#9/13/2024)
- [9/12/2024](#9/12/2024)
- [9/11/2024](#9/11/2024)
- [9/10/2024](#9/10/2024)
- [9/9/2024](#9/9/2024)
- [9/8/2024](#9/8/2024)
- [9/6/2024](#9/6/2024)
- [9/5/2024](#9/5/2024)
- [9/3/2024](#9/3/2024)
- [9/2/2024](#9/2/2024)
- [9/1/2024](#9/1/2024)

<!-- ------------------------------ Overview End ------------------------------ -->

<!-- ++++++++++++++++++++ 9/13/2024 Start ++++++++++++++++++++ -->

## 9/13/2024

- Added Tisy map edit and Bunker
- Added PunchedCard spawns to ContaminatedArea
- Added Bennett's Bunker requirements
- Added NWAF Bunker
- Added Police Station map edits

<!-- ++++++++++++++++++++ 9/13/2024 End ++++++++++++++++++++ -->

<!-- ++++++++++++++++++++ 9/12/2024 Start ++++++++++++++++++++ -->

## 9/12/2024

- Tweaks to random zombie spawn event
- Set loot tiers and categories for MVS items
- Adjusted some loot spawns in vanilla and msp types
- Adjusted some mapgroupprotos
- Adjusted amount of heli crash events

<!-- ++++++++++++++++++++ 9/12/2024 End ++++++++++++++++++++ -->

<!-- ++++++++++++++++++++ 9/11/2024 Start ++++++++++++++++++++ -->

## 9/11/2024

- Added fog to Devil's castle
- Adjusted spawnable types

<!-- ++++++++++++++++++++ 9/11/2024 End ++++++++++++++++++++ -->

<!-- ++++++++++++++++++++ 9/10/2024 Start ++++++++++++++++++++ -->

## 9/10/2024

- Added random zombie spawn event
- Vehicles now spawn with random colored doors/trunks/hoods
- Added Vodka spawns
- @BaseBuildingPlus
  - change "BBP_SetInfiniteLifetime" to "0"
- Added magic mushroom spawns event
- Added convoy officer with punch card to convoy event
- Change "globals.xml" "IdleModeCountdown" "value" to "86400"
- Adjusted spawn rates of some vanilla tools
- Adjusted spawn rates of vanilla pouches
- Lowered spawns of small protector cases and teddy bears
- Lowered some vanilla canteen spawns to make room for mod items
- Lowered some vanilla clothing spawns to make room for mod items
- Added NorseHelm as a rare spawn
- Added DarkMotoHelmet_YellowScarred as a rare spawn
- Added black and green 40 round c-mags
- Added 9x19 loose ammo to military/police
- Adjusted min/max of loose ammo and magazine spawns
- Removed @MuchStuffPack Grenade box
- Adjusted @MMG Base Storage and @ModularVestSystem types

<!-- ++++++++++++++++++++ 9/10/2024 End ++++++++++++++++++++ -->

<!-- ++++++++++++++++++++ 9/9/2024 Start ++++++++++++++++++++ -->

## 9/9/2024

- Added mod @MunghardsItemPack
- Removed mod @MunghardsItemPack due to items causing crashes
- Adjust types files for @BaseFortifications and @Modular Vest System - Reworked
- Moved gas strike from Zenit to Altar

<!-- ++++++++++++++++++++ 9/9/2024 End ++++++++++++++++++++ -->

<!-- ++++++++++++++++++++ 9/8/2024 Start ++++++++++++++++++++ -->

## 9/8/2024

- Added Radio Zenit map edit
- Added fog to Green Mountain

<!-- ++++++++++++++++++++ 9/8/2024 End ++++++++++++++++++++ -->

<!-- ++++++++++++++++++++ 9/6/2024 Start ++++++++++++++++++++ -->

## 9/6/2024

- Added some non spawning items to types (melee and different color weapons/attachments)
- Adjustments to cfgrandompresets.xml
- Adjustments to cfgspawnabletypes.xml
- ADd @BaseFortifications types.xml

<!-- ++++++++++++++++++++ 9/6/2024 Start ++++++++++++++++++++ -->

<!-- ++++++++++++++++++++ 9/5/2024 Start ++++++++++++++++++++ -->

## 9/5/2024

- Adjust Mod config files:
  - @MuchStuffPack
    - MuchFramework/MF_CodeLockConfig.json
      - change "DeleteLockOnRaid" to "true"

<!-- ++++++++++++++++++++ 9/5/2024 End ++++++++++++++++++++ -->

<!-- ++++++++++++++++++++ 9/2/2024 Start ++++++++++++++++++++ -->

## 9/3/2024

- Adjust @Burlap_Rifle_Wrap types spawn quantities
- Adjust @CannabisPlus types spawn quantities
- Adjust @CodeLock types spawn quantities
- Adjust @DrugsPlus types spawn quantities
- Adjust @MMG Raid Tools spawn quantities
- Adjust @MMG Storage spawn quantities     ---  need to see what this is Msp_PolarBear

<!-- ++++++++++++++++++++ 9/3/2024 End ++++++++++++++++++++ -->

<!-- ++++++++++++++++++++ 9/2/2024 Start ++++++++++++++++++++ -->

## 9/2/2024

- Tweaks to cfgspawnabletypes.xml
- Tweaks to cfgrandompresets.xml
- Edit globals.xml:
  - change "IdleModeStartup" value="0"
  - change "ZombieMaxCount" value="1500"
- Created types.xml file categorized by item type
- Configure Mods: 
  - @CannabisPlus
    - change "activateCigaretteSmokingEffect" to "1"
  - @CodeLock
    - CodeLockPerms.json: 
      - change "playerId" to "76561198059652382"
      - change "CanOpenLocks" to "true"
      - change "CanChangePasscodes" to "true"
      - change "CanRemoveLocks" to "true
  - @DrugsPlus
    - change "allowcokeenergybuff" to "1"
  - @MMG Base Storage
    - change "DeleteLockAfterRaid" to "true"
  - @PvZmoD_CustomisableZombies
    - PvZmoD_CustomisableZombies_Characteristics.xml:
      - Edited various infected stats
    - PvZmoD_CustomisableZombies_Globals.xml:
      - change "Zombies_Hit_Players_On_Obstacles_Activated"	"Day" to "0" "Night" to "0"
      - change "Zombies_Size_Activated" "Day" to "1" "Night" to "1"
      - change "Zombies_Hearing_Crouching_Players_Ratio" "Day" to "0.6"	"Night" to "0.6"
      - change "Damages_To_Vehicles		Activated" to "0"
      - change "Zombies_Throw_Stones_Activated"	"Day"	to "0" "Night to "0"
        
<!-- ++++++++++++++++++++ 9/2/2024 End ++++++++++++++++++++ -->

<!-- ++++++++++++++++++++ 9/1/2024 Start ++++++++++++++++++++ -->

## 9/1/2024

- Uploaded vanilla Chernarus server files
- Edit "Config.cfg":
  - change "hostname" to "DayZedAndConfused Chernarus - Under Development"
  - change "enableCfgGameplayFile" to "1"
  - change "serverTimeAcceleration" to "4"
  - change "serverNightTimeAcceleration" to "2.5"
  - change "motd[]" to  "Welcome to DayZed And Confused", "This server is inder development", "Visit our Discord: https://discord.gg/UkHvV7j6kf"
  - change "template" to "dayzed.chernarusplus"
  - add "vppDisablePassword = 1;"
- Edit "cfggameplay.json":
  - change "sprintStaminaModifierErc" to "0.5"
  - change "sprintStaminaModifierCro" to "0.5"
  - change "staminaWeightLimitThreshold" to "12000.0"
  - change "staminaKgToStaminaPercentPenalty" to "0.50"
  - change "ignoreMapOwnership" to "true"
  - change "displayPlayerPosition" to "true"
- Started work on sorted types file for Chernarus
- Install Mods:
  - @BaseBuildingPlus: https://steamcommunity.com/sharedfiles/filedetails/?id=1710977250
  - @Burlap_Rifle_Wrap: https://steamcommunity.com/sharedfiles/filedetails/?id=3314346214
  - @CannabisPlus: https://steamcommunity.com/workshop/filedetails/?id=1932611410
  - @CF: https://steamcommunity.com/workshop/filedetails/?id=1559212036
  - @Code Lock: https://steamcommunity.com/sharedfiles/filedetails/?id=1646187754
  - @DrugsPlus: https://steamcommunity.com/sharedfiles/filedetails/?id=2170927235
  - @Ear-Plugs: https://steamcommunity.com/workshop/filedetails/?id=1819514788
  - @MMG Base Storage: https://steamcommunity.com/workshop/filedetails/?id=3210162677
  - @Modular Vest System - Reworked: https://steamcommunity.com/sharedfiles/filedetails/?id=2629595854
  - @MuchFramework: https://steamcommunity.com/workshop/filedetails/?id=3171576913
  - @MuchStuffPack: https://steamcommunity.com/sharedfiles/filedetails/?id=1991570984
  - @PvZmoD_CustomisableZombies: https://steamcommunity.com/sharedfiles/filedetails/?id=2051775667
  - @SchanaModGlobalChat: https://steamcommunity.com/workshop/filedetails/?id=2115602332
  - @VPPAdminTools: https://steamcommunity.com/sharedfiles/filedetails/?id=1828439124
- Configure Mods: 
  - @BaseBuildingPlus
    - change "BBP_FlagBuildAnywhere" to "1"
    - change "BBP_TentBuildAnywhere" to "1"
    - change "BBP_VanillaBuildAnywhere" to "1"
    - change "BBP_CanAttachFlashlights": to "1"
    - change "BBP_CanAttachXmaslights" to "1"
  - @PvZmoD_CustomisableZombies
    - PvZmoD_Information_Panel.xml
      - change "Custom_Server_Link" "Value" to "https://discord.gg/UkHvV7j6kf"
  - @VPPAdminTools
    - SuperAdmins.txt:
      - add DirtyHam steamid: "76561198059652382"
- Add mod types.xml
  - @BaseBuildingPlus
  - @Burlap_Rilfe_Rap
  - @CodeLock
  - @CannabisPlus
  - @DrugsPlus
  - @MMG Base Storage
  - @Modular Vest System - Reworked
  - @MuchStuffPack

<!-- ++++++++++++++++++++ 9/1/2024 End ++++++++++++++++++++ -->

<!-- ------------------------------ChangeLog End ------------------------------ -->


<!-- ------------------------------ Outro Start ------------------------------ -->


<!-- ------------------------------ Outro End ------------------------------ -->


<!-- ======================================== CHANGELOG-CHERNARUS.md End ======================================== -->
