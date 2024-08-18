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
- Uploaded mod files to github
- serverDZ.cfg:
 - add "vppDisablePassword = 1;"
 - change "serverTimePersistent" to "1"
 - change "maxPlayers" to "40"
 - change "hostname" from "Regular Namalsk Server" to "DayZedAndConfused Namalsk - Under Development"
 - change "lightingConfig" from "1" to "223"
- cfggameplay.json:
 - add cfggameplay.json file from chernaurus
 - change "lightingConfig" from "1" to "223"
 - change "environmentMinTemps" from "[-3.0, -2.0, 0.0, 4.0, 9.0, 14.0, 18.0, 17.0, 12.0, 7.0, 4.0, 0.0]" to "[-32, -27, -21, -14,  -7,  -4,  -2,   2,  -3,  -7, -15, -25]"
 - change "environmentMaxTemps" from "[3.0, 5.0, 7.0, 14.0, 19.0, 24.0, 26.0, 25.0, 21.0, 16.0, 10.0, 5.0]" to "[-12,  -8,  -3,   0,   2,   5,   7,  11,   8,   5,   2,  -8]"
 - change "disablePersonalLight" from "true" to "false"
 - change "displayPlayerPosition" from "false" to "true"
- Installed mods:
 - CF
 - BaseBuildingPlus
 - Namalsk Island
 - Namalsk Survival
 - VPPAdminTools
 - SchanaModGlobalChat
 - MMG Base Storage
 - Code Lock
 - Ear-Plugs
 - MuchStuffPack
 - CannabisPlus
Configure mods:
 - VPPAdminTools:
  - Add SteamID for DirtyHam (76561198059652382) to profiles/VPPAdminTools/Permissions/SuperAdmins/SuperAdmins.txt
 - BaseBuildingPlus:
  - Copy Namalsk BBP_Settings.json from mod folder
   - Change "BBP_FlagBuildAnywhere" to "1"
   - Change "BBP_TentBuildAnywhere" to "1"
   - Change "BBP_VanillaBuildAnywhere" to "1"
  - Copy "BBP_Types.xml" to db folder, modify types to spawn in namalsk
 - cfgeconomycore.xml:
  - Add "<file name="BBP_types.xml" type="types" />"
  - Add "<file name="mmg_storage.xml" type="types" />"
  - Add "<file name="codelock_types.xml" type="types" />"
 - Code Lock:
 - Ear-Plugs:

<!-- ++++++++++++++++++++ 8/17/2024 End ++++++++++++++++++++ -->


<!-- ------------------------------ChangeLog End ------------------------------ -->


<!-- ------------------------------ Outro Start ------------------------------ -->


<!-- ------------------------------ Outro End ------------------------------ -->


<!-- ======================================== CHANGELOG.md End ======================================== -->
