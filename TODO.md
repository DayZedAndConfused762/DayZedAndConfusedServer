<!-- ======================================== TODO.md Start ======================================== -->


<!-- ------------------------------ Intro Start ------------------------------ -->

# DayZedAndConfused DayZ Server To Do List

<!-- ------------------------------ Intro End ------------------------------ -->


<!-- ------------------------------ Overview Start ------------------------------ -->


<!-- ------------------------------ Overview End ------------------------------ -->


<!-- ------------------------------ TODO Start ------------------------------ -->

## To Do 

- Figure out which UAZ needs a glow plug instead of a spark plug
- Find spawn points for Kamaz trucks
- Find spawn points for Kamaz Typhoon
- Find spawn points for Gunnertruck
- Find spawn points for Scorpion bike
  - Figure out spawnable types for bike
- Find spawn points for scvehicles
  - Figure out hood, trunk, and wheels for taxi
- Make Spawnable typs for TLH

https://steamcommunity.com/sharedfiles/filedetails/?id=2040039995
https://steamcommunity.com/sharedfiles/filedetails/?id=2982907131

15:13:41.252 [CE][LootRespawner] (PRIDummy) :: Item [647] causing search overtime: "Msp_CoffinBox"
15:14:07.751 [CE][LootRespawner] (PRIDummy) :: Item [648] causing search overtime: "DP_CocaSeedsPack"
15:14:08.251 [CE][LootRespawner] (PRIDummy) :: Item [649] causing search overtime: "Msp_BlunderBat"
15:14:08.351 [CE][LootRespawner] (PRIDummy) :: Item [650] causing search overtime: "Msp_BassAxe"

15:14:39.452 [CE][SpawnRandomLoot] (StaticAirplaneCrate) :: Type: StaticObj_Misc_SupplyBox1_DE, lootmin: 4, lootmax: 8, wanted: 4, deloot: 2, containermaxsum: 4
15:14:39.452 [CE][SpawnRandomLoot] (StaticAirplaneCrate) :: Type: StaticObj_Misc_SupplyBox1_DE :: !!! Sum of container LootMax is lower than event child LootMax (4 < 8)

15:14:39.455 [CE][SpawnRandomLoot] (StaticAirplaneCrate) :: Type: StaticObj_Misc_SupplyBox3_DE, lootmin: 4, lootmax: 8, wanted: 5, deloot: 2, containermaxsum: 4
15:14:39.455 [CE][SpawnRandomLoot] (StaticAirplaneCrate) :: Type: StaticObj_Misc_SupplyBox3_DE :: !!! Sum of container LootMax is lower than event child LootMax (4 < 8)
15:14:39.455 [CE][SpawnRandomLoot] (StaticAirplaneCrate) :: Type: StaticObj_Misc_SupplyBox3_DE :: !!! Wanting to spawn more loot than possible (5 > 4)

15:14:39.457 [CE][SpawnRandomLoot] (StaticAirplaneCrate) :: Type: StaticObj_Misc_SupplyBox2_DE, lootmin: 4, lootmax: 8, wanted: 7, deloot: 2, containermaxsum: 4
15:14:39.457 [CE][SpawnRandomLoot] (StaticAirplaneCrate) :: Type: StaticObj_Misc_SupplyBox2_DE :: !!! Sum of container LootMax is lower than event child LootMax (4 < 8)
15:14:39.457 [CE][SpawnRandomLoot] (StaticAirplaneCrate) :: Type: StaticObj_Misc_SupplyBox2_DE :: !!! Wanting to spawn more loot than possible (7 > 4)

- https://steamcommunity.com/sharedfiles/filedetails/?id=2969381819&searchtext=molotov
- https://steamcommunity.com/sharedfiles/filedetails/?id=2982907131
- CJ187-MoreCrashsites: https://steamcommunity.com/sharedfiles/filedetails/?id=2192420336
- Post server feature list to discord

- Add Bunker tags to bunker items in mapgroupprotos
- Add bunker tags to items that will only spawn in bunker

https://cmsminecraftshop.com/en/console/

 7:15:16.819 !!! [CE][offlineDB] :: Type 'TLH_AmmoBox_762x51mmDUDS' will be ignored. (Type does not exist. (Typo?))
 7:15:16.819 !!! [CE][offlineDB] :: Type 'TLH_Ammo_762x51mmDUDS' will be ignored. (Type does not exist. (Typo?))
 7:15:16.819 !!! [CE][offlineDB] :: Type 'TLH_Mag_1911_8Rnd' will be ignored. (Type does not exist. (Typo?))
 7:15:16.819 !!! [CE][offlineDB] :: Type 'TLH_Helmet_MICH2000_Black' will be ignored. (Type does not exist. (Typo?))
 7:15:16.819 !!! [CE][offlineDB] :: Type 'TLH_NBC_Hood_M81' will be ignored. (Type does not exist. (Typo?))
 7:15:16.819 !!! [CE][offlineDB] :: Type 'TLH_NBC_Hood_White' will be ignored. (Type does not exist. (Typo?))
 7:15:16.819 !!! [CE][offlineDB] :: Type 'TLH_Pants_M65_MonolithFighter' will be ignored. (Type does not exist. (Typo?))
 7:15:16.819 !!! [CE][offlineDB] :: Type 'TLH_Collectable_Book_StrangeDiary' will be ignored. (Type does not exist. (Typo?))
 7:15:16.819 !!! [CE][offlineDB] :: Type 'TLH_Collectable_Note_StrangeNote' will be ignored. (Type does not exist. (Typo?))

- https://www.reddit.com/r/dayz/comments/142j5kd/pve_mod/
- Setup airdrop loot
- Setup lootcrate loot
- https://forums.dayz.com/topic/254867-i-need-help-creating-a-random-zombie-horde/
- https://forums.dayz.com/topic/241019-zombie-hordes-to-my-server/
- https://forums.dayz.com/topic/254867-i-need-help-creating-a-random-zombie-horde/
- https://www.youtube.com/watch?v=PKh1DQOnbBQ
- https://www.youtube.com/watch?v=8HBV6d0ryDs
- https://www.youtube.com/watch?v=VboiOKEHTQs
- https://www.youtube.com/watch?v=bezRqYIYeh4
- https://www.youtube.com/watch?v=UEpuAUm0fZ8
- https://www.youtube.com/watch?v=7_R_2HnDkzk
- add loot to protective cases
- spawn and test, remove from types if non functional PoliceBaton CattleProd StunBaton
- add spawn loadouts to chernarus
  - dayzyourway.com
- review mods for possible use:



  - Drunk: https://steamcommunity.com/sharedfiles/filedetails/?id=2842789742
    - @pr3d3k - In your Profile Folder > Drunkenness > Settings.json, just remove "Vodka" from "Drinks", and leave it only under "Liquids".  It's not a bug, just wrong settings that were supplied with the mod and they will be fixed on next update. Thanks for reporting!
  - Den Drinks: https://steamcommunity.com/sharedfiles/filedetails/?id=2953370689
  - MassFood: https://steamcommunity.com/sharedfiles/filedetails/?id=2693816184
  - Last Resort - Drunkeness: https://steamcommunity.com/sharedfiles/filedetails/?id=2892950955&searchtext=
  - ZenLeftovers: https://steamcommunity.com/sharedfiles/filedetails/?id=2793619401

  - Survivor Animations: https://steamcommunity.com/workshop/filedetails/?id=2918418331

  - Zen's Artillery Strike Grenades: https://steamcommunity.com/sharedfiles/filedetails/?id=2899350583

  - MuchCarKey: https://steamcommunity.com/workshop/filedetails/?id=2049002856
  - Lockpick Cars: https://steamcommunity.com/sharedfiles/filedetails/?id=2682453405

  - InfectedHordesPlus: https://steamcommunity.com/sharedfiles/filedetails/?id=1733084281

  - BleedTrail: https://steamcommunity.com/sharedfiles/filedetails/?id=1640091454

  - ItemRarity: https://steamcommunity.com/sharedfiles/filedetails/?id=2932515312

  - SimpleAutorun: https://steamcommunity.com/sharedfiles/filedetails/?id=2264162971
  - SIX-DayZ-Auto-Run: https://steamcommunity.com/sharedfiles/filedetails/?id=1781132597

  - CarCover: https://steamcommunity.com/sharedfiles/filedetails/?id=2303483532
  - FlipTransport: https://steamcommunity.com/sharedfiles/filedetails/?id=1832448183

  - CJ187-MoreWeapons: https://steamcommunity.com/sharedfiles/filedetails/?id=1945519331
  - MoreGuns: https://steamcommunity.com/sharedfiles/filedetails/?id=1665663702
  - Mortys Weapons: https://steamcommunity.com/sharedfiles/filedetails/?id=2155726353
  - Katana: https://steamcommunity.com/sharedfiles/filedetails/?id=2199693143
  - Advanced Weapon Scopes: https://steamcommunity.com/sharedfiles/filedetails/?id=2143128974

  - Treasure: https://steamcommunity.com/sharedfiles/filedetails/?id=1982919196

  - BBPItemPack: https://steamcommunity.com/sharedfiles/filedetails/?id=2794690371
  - Furniture: https://steamcommunity.com/sharedfiles/filedetails/?id=2909153895
  - Furniture Kits [1.0]: https://steamcommunity.com/sharedfiles/filedetails/?id=2519713465
  - Basic_Territories_Updated: https://steamcommunity.com/sharedfiles/filedetails/?id=2999534116

  - Spurgles_BagZ: https://steamcommunity.com/sharedfiles/filedetails/?id=2489196158
  - WindstridesClothingPack: https://steamcommunity.com/sharedfiles/filedetails/?id=1797720064
  - CJ187-MoreItems: https://steamcommunity.com/sharedfiles/filedetails/?id=2040039995
  - GearPDA: https://steamcommunity.com/sharedfiles/filedetails/?id=2124309453
  - Mass'sManyItemOverhaul: https://steamcommunity.com/sharedfiles/filedetails/?id=1566911166
  - AdditionalMedicSupplies: https://steamcommunity.com/sharedfiles/filedetails/?id=2579252958

<!-- ------------------------------ToDo End ------------------------------ -->


<!-- ------------------------------ Outro Start ------------------------------ -->


<!-- ------------------------------ Outro End ------------------------------ -->


<!-- ======================================== TODO.md End ======================================== -->
