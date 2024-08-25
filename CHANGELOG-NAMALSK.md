<!-- ======================================== CHANGELOG.md Start ======================================== -->


<!-- ------------------------------ Intro Start ------------------------------ -->

# DayZedAndConfused Namalsk ChangeLog

<!-- ------------------------------ Intro End ------------------------------ -->


<!-- ------------------------------ Overview Start ------------------------------ -->

## Contents:

- [8/23/2024](#8/23/2024)

<!-- ------------------------------ Overview End ------------------------------ -->


<!-- ++++++++++++++++++++ 8/25/2024 Start ++++++++++++++++++++ -->

- Added Heli Crashes

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
