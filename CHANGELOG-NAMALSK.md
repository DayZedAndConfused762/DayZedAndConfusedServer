<!-- ======================================== CHANGELOG.md Start ======================================== -->


<!-- ------------------------------ Intro Start ------------------------------ -->

# DayZedAndConfused Namalsk ChangeLog

<!-- ------------------------------ Intro End ------------------------------ -->


<!-- ------------------------------ Overview Start ------------------------------ -->

## Contents:

- [8/30/2024](#8/30/2024)
- [8/29/2024](#8/29/2024)
- [8/28/2024](#8/28/2024)
- [8/27/2024](#8/27/2024)
- [8/25/2024](#8/25/2024)
- [8/23/2024](#8/23/2024)

<!-- ------------------------------ Overview End ------------------------------ -->

## 8/30/2024

- Update motd in Config.cfg
  - motd[] = "Welcome to DayZed And Confused", "This server is inder development", "Visit our Discord: https://discord.gg/UkHvV7j6kf"

## 8/29/2024

- Edit @BaseBuildingPlus settings "BBP_Settings.json":
  - Change "BBP_FlagBuildAnywhere" to "1"
  - Change "BBP_TentBuildAnywhere" to "1"
  - Change "BBP_VanillaBuildAnywhere" to "1"
  - Change "BBP_CanAttachFlashlights" to "1"
  - Change "BBP_CanAttachXmaslights" to "1"
  - Change "BBP_CanAttachCamonets" to "1"
- Edit "mapgroupproto.xml" to correct lootmax mismatch errors
- Edit "Config.cfg" change "template" form "regular.namalsk" to "dayzed.namalsk"
- Rename Namalsk mission folder from "regular.namalsk" to "dayzed.namalsk"
- Edit @PvZmoD_CustomisableZombies settings file "@PvZmoD_CustomisableZombies_Characteristics.xml" to adjust various zombie stats
- Adjusted items spawned on zombies
  - Journalist Zombies may spawn with Press Vests (PressVest_Blue", "PressVest_LightBlue")
  - Fishing Zombies may spawn with Flight Helmet (ZSh3PilotHelmet)
  - Medical Zombies may spawn with Scrub hats (MedicalScrubsHat_Green, MedicalScrubsHat_White, MedicalScrubsHat_Blue)
  - Skate Zombies may spawn with Skate Helmet (SkateHelmet_Black, SkateHelmet_Blue, SkateHelmet_Gray, SkateHelmet_Green, SkateHelmet_Red)
  - Hiker Zombies have a low change to spawn with Gas cans (LargeGasCanister, MediumGasCanister, SmallGasCanister)
  - Construction Worker Zombies have a chance to spawn with Hardhats ConstructionHelmet_Blue, ConstructionHelmet_Lime, ConstructionHelmet_Orange, ConstructionHelmet_Red, ConstructionHelmet_White, ConstructionHelmet_Yellow) and Reflective Vest (ReflexVest)
  - Priest Zombies may spawn with Witch Hoods (WitchHood_Red, WitchHood_Black)

<!-- ++++++++++++++++++++ 8/28/2024 Start ++++++++++++++++++++ -->

## 8/28/2024

- Upload mod types.xml files
  - Edit @MuchStuffPack types file (types_muchstuffpack.xml) to work with Namalsk, adjusted spawn amounts and categories
  - Adjusted spawn amounts and categories for @MMG Base Storage (types_mmg_base_storage.xml)
  - Adjusted spawn amounts and categories for @CannabisPlus (types_cannabisplus.xml)
  - Adjusted spawn amounts and categories for @MuchStuffPack (types_muchstuffpack.xml)
  - Adjusted spawn amounts and categories for @DrugsPlus (types_drugsplus.xml)
  - Adjusted spawn amounts and categories for @CodeLock (types_codelock.xml)
- Add links to mod types files to cfgeconomycore.xml
  - file name="types_muchstuffpack.xml" type="types"
- Edited some categories in mapgroupproto.xml

<!-- ++++++++++++++++++++ 8/28/2024 End ++++++++++++++++++++ -->

<!-- ++++++++++++++++++++ 8/27/2024 Start ++++++++++++++++++++ -->

## 8/27/2024

- Upload mod types.xml files
  - Edit @BaseBuildingPlus types file (types_bbp.xml) to work with Namalsk
  - Edit @CodeLock types file (types_codelock.xml) to work with Namalsk
  - Edit @DrugsPlus types file (types_drugsplus.xml) to work with Namalsk
  - Edit @MMG Base Storage types file (types_mmg_base_storage.xml) to work with Namalsk
  - Edit @CannabisPlus types file (types_cannabisplus.xml) to work with Namalsk
- Add links to mod types files to cfgeconomycore.xml
  - file name="types_bbp.xml" type="types"
  - file name="types_codelock.xml" type="types"
  - file name="types_drugsplus.xml" type="types"
  - file name="types_mmg_base_storage.xml" type="types"
  - file name="types_cannabisplus.xml" type="types"
- Add events types.xml link to cfgeconomycore.xml that was missed from last update
  - file name="types_events.xml" type="types"
- Add loot tags for Heli and Train crash events to cfglimitsdefinition.xml
  - tag name="helicrash"
  - tag name="traincrash"
- Add Train Crash events using code snippet Add_DynamicTrainEvents_Namalsk.txt

<!-- ++++++++++++++++++++ 8/27/2024 Start ++++++++++++++++++++ -->

<!-- ++++++++++++++++++++ 8/25/2024 Start ++++++++++++++++++++ -->

## 8/25/2024

- Added Heli Crash events using code snippet addrandom_heli_crash_to_namalks.xml

<!-- ++++++++++++++++++++ 8/25/2024 End ++++++++++++++++++++ -->


<!-- ++++++++++++++++++++ 8/23/2024 Start ++++++++++++++++++++ -->

## 8/23/2024

- Uploaded server files to github
- Config.cfg (renamed from serverDZ.cfg):
  - add "vppDisablePassword = 1;"
  - change "hostname" to "DayZedAndConfused Namalsk - Under Development"
  - change "defaultVisibility" to "2200"
  - change "defaultObjectViewDistance" to "2200"
  - change "enableCfgGameplayFile" to "1"
  - change "serverTimeAcceleration" to "2.5"
  - change "serverNightTimeAcceleration" to "9"
  - change "serverTimePersistent" to "1"
  - change "serverTime" to "2011/11/1/9/49"
  - change "lightingConfig" to "223"
  - change "template" to "regular.namalsk"
- cfggameplay.json (copied form chernaurus files):
  - change "displayPlayerPosition" from "false" to "true"
  - change "ignoreMapOwnership" to "true"
  - change "sprintStaminaModifierErc" to "0.5"
  - change "sprintStaminaModifierCro" to "0.5"
  - change "staminaKgToStaminaPercentPenalty" to 1.0"
  - change "lightingConfig" to "223"
  - change "environmentMaxTemps" to "-12, -8, -3, 0, 2, 5, 7, 11, 8, 5, 2, -8"
  - change "environmentMinTemps" to "-32, -27, -21, -14, -7, -4, -2, 2, -3, -7, -15, -25"
- types.xml:
  - created types.xml file sorted by item type
- types_dzn.xml:
  - created types_dzn.xml file sorted by item type
- Install Mods:
  - @BaseBuildingPlus
  - @CannabisPlus
  - @CF
  - @Code Lock
  - @DrugsPlus
  - @Ear-Plugs
  - @Forward Operator Gear
  - @MMG Base Storage
  - @MuchFramework
  - @MuchStuffPack
  - @Namalsk Island
  - @Namalsk Survival
  - @PvZmoD_CustomisableZombies
  - @SchanaModGlobalChat
  - @VPPAdminTools
- Configure Mods: 
  - @BaseBuildingPlus
    - Copy namalsk config
    - change "BBP_FlagBuildAnywhere" to "1"
    - change "BBP_TentBuildAnywhere" to "1"
    - change "BBP_VanillaBuildAnywhere" to "1"
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
  - @PvZmoD_CustomisableZombies
    - PvZmoD_CustomisableZombies_Characteristics.xml:
    - PvZmoD_CustomisableZombies_Globals.xml:
      - change "Zombies_Hit_Players_On_Obstacles_Activated"	"Day" to "0" "Night" to "0"
      - change "Zombies_Size_Activated" "Day" to "1" "Night" to "1"
      - change "Zombies_Hearing_Crouching_Players_Ratio" "Day" to "0.6"	"Night" to "0.6"
      - change "Damages_To_Vehicles		Activated" to "0"
      - change "Zombies_Throw_Stones_Activated"	"Day"	to "0" "Night to "0"
    - PvZmoD_Information_Panel.xml
      - change "Custom_Server_Link" "Value" to "https://discord.gg/UkHvV7j6kf"
  - @VPPAdminTools
    - SuperAdmins.txt:
      - add DirtyHam steamid: "76561198059652382"

<!-- ++++++++++++++++++++ 8/23/2024 End ++++++++++++++++++++ -->


<!-- ------------------------------ChangeLog End ------------------------------ -->


<!-- ------------------------------ Outro Start ------------------------------ -->


<!-- ------------------------------ Outro End ------------------------------ -->


<!-- ======================================== CHANGELOG.md End ======================================== -->
