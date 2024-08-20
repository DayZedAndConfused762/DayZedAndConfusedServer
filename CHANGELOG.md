<!-- ======================================== CHANGELOG.md Start ======================================== -->


<!-- ------------------------------ Intro Start ------------------------------ -->

# DayZedAndConfused DayZ Server ChangeLog

<!-- ------------------------------ Intro End ------------------------------ -->


<!-- ------------------------------ Overview Start ------------------------------ -->

## Contents:
- [8/17/2024](#8/17/2024)

<!-- ------------------------------ Overview End ------------------------------ -->


<!-- ------------------------------ ChangeLog Start ------------------------------ -->

<!-- ++++++++++++++++++++ 8/17/2024Start ++++++++++++++++++++ -->

## 8/17/2024

- Uploaded server files to github
- serverDZ.cfg:
  - add "vppDisablePassword = 1;"
  - change "hostname" to "DayZedAndConfused Bitterroot - Under Development"
  - change "defaultVisibility" to "3000"
  - change "defaultObjectViewDistance" to "3000"
  - change "enableCfgGameplayFile" to "1"
  - change "serverTimeAcceleration" to "6"
  - change "serverNightTimeAcceleration" to "2"
  - change "serverTimePersistent" to "1"
- cfggameplay.json:
  - change "displayPlayerPosition" from "false" to "true"
  - change "ignoreMapOwnership" to "true"
  - change "sprintStaminaModifierErc": 0.5,
	- change "sprintStaminaModifierCro": 0.5,
  - change "staminaKgToStaminaPercentPenalty": 1.0,
- Installed mods:
  - CF
  - BaseBuildingPlus
  - VPPAdminTools
  - SchanaModGlobalChat
  - MMG Base Storage
  - Code Lock
  - Ear-Plugs
  - MuchStuffPack
  - CannabisPlus
- Configure mods:
  - VPPAdminTools:
    	- Add SteamID for DirtyHam (76561198059652382) to profiles/VPPAdminTools/Permissions/SuperAdmins/SuperAdmins.txt
  - BaseBuildingPlus:
   - Change "BBP_FlagBuildAnywhere" to "1"
   - Change "BBP_TentBuildAnywhere" to "1"
   - Change "BBP_VanillaBuildAnywhere" to "1"
  - Copy "BBP_Types.xml" to db folder, modify types to spawn in namalsk
 - Ear-Plugs:
 - CannabisPlus:
  - Change "activateCigaretteSmokingEffect" "1"
 - DrugsPlus:
  - Change "allowcokeenergybuff" to "1"
 - PvZmoD_Information_Panel:
  - Change         <PvZmoD_Information_Panel_Enable_In_Main_Menu	Value = "0"/>	<!-- [Integer 0 or 1] "0" only work AFTER the player have joined the server --> 
  - Change      <PvZmoD_Information_Panel_Enable_In_Game_Menu	Value = "0"/>
<!-- ++++++++++++++++++++ 8/17/2024 End ++++++++++++++++++++ -->


<!-- ------------------------------ChangeLog End ------------------------------ -->


<!-- ------------------------------ Outro Start ------------------------------ -->


<!-- ------------------------------ Outro End ------------------------------ -->


<!-- ======================================== CHANGELOG.md End ======================================== -->
