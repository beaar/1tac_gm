/* assignGear specific macros */
tooltip = "Author: Fingers";
class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    faces[] = {"faceset:caucasian"};
    // All randomized.
    uniform[] =
    {
        "gm_dk_army_uniform_soldier_84_oli"
    };
    vest[] = {"gm_dk_army_vest_54_rifleman"};
    backpack[] = {};
    headgear[] = {};
    goggles[] = {""};
    hmd[] = {};
    // Leave empty to remove all. "Default" > leave original item.

    // All randomized
    primaryWeapon[] = {};
    scope[] = {};
    bipod[] = {};
    attachment[] = {};
    silencer[] = {};
    // Leave empty to remove all. "Default" for primaryWeapon > leave original weapon.

    // Only *Weapons[] arrays are randomized
    secondaryWeapon[] = {};
    secondaryAttachments[] = {};
    sidearmWeapon[] = {};
    sidearmAttachments[] = {};
    // Leave empty to remove all. "Default" for secondaryWeapon or sidearmWeapon > leave original weapon.

    // These are added to the uniform or vest
    magazines[] = {};
    items[] = {};
    // These are added directly into their respective slots
    linkedItems[] = {
        "ItemMap",
        "gm_ge_army_conat2",
        "ItemRadio",
        "gm_watch_kosei_80"
    };

    // These are put into the backpack
    backpackItems[] = {};

    // This is executed after unit init is complete. argument: _this = _unit.
    code = "";
};
class r : baseMan
{
    displayName = "Rifleman";
    headgear[] =
    {
        "gm_dk_headgear_m52_oli",
        "gm_dk_headgear_m52_net_oli"
    };
    backpack[] = {};
    primaryWeapon[] = {"gm_g3a3_oli"};
    magazines[] =
    {
        LIST_8("gm_20Rnd_762x51mm_B_DM111_g3_blk"),
        LIST_2("gm_handgrenade_frag_dm51")
    };	
	items[] =
	{
		LIST_5("ACE_fieldDressing"),
        LIST_3("ACE_quikclot"),
        "ACE_morphine",
        "ACE_tourniquet"
	};
};
class g : r
{
    displayName = "Grenadier";
	backpack[] = {"gm_dk_army_backpack_73_oli"};
    magazines[] +=
    {
        LIST_5("gm_1rnd_67mm_heat_dm22a1_g3")
    };
};
class car : r
{
    displayName = "Carabinier";	
    primaryWeapon[] = {"gm_g3a4_oli"};
	magazines[] =
    {
        LIST_7("gm_20Rnd_762x51mm_B_DM111_g3_blk"),
        LIST_2("gm_handgrenade_frag_dm51")
    };
};
class m : car 
{
    displayName = "Medic";    
	backpack[] = {"gm_dk_army_backpack_73_oli"};
	backpackItems[] = {
		LIST_15("ACE_fieldDressing"),
        LIST_20("ACE_elasticBandage"),
        LIST_20("ACE_packingBandage"),
        LIST_2("ACE_atropine"),
        LIST_10("ACE_morphine"),
        LIST_10("ACE_epinephrine"),
        LIST_5("ACE_tourniquet"),
        LIST_6("ACE_bloodIV"),
        LIST_1("ACE_surgicalKit"),
		LIST_2("gm_smokeshell_wht_dm25")
	};
};
class smg : r
{
    displayName = "Submachinegunner";
    primaryWeapon[] = {"gm_mp2a1_blk"};
    magazines[] =
    {
        LIST_6("gm_32Rnd_9x19mm_B_DM51_mp2_blk"),
        "gm_handgrenade_frag_dm51"
    };
};
class ftl : r
{
    displayName = "Fireteam Leader";
	   magazines[] +=
    {
		LIST_2("gm_smokeshell_wht_dm25")
    };
    linkedItems[] += {"gm_ferod16_oli"};
};
class sl : ftl
{
    displayName = "Squad Leader";
    sidearmWeapon[] = {"gm_p1_blk"};
    magazines[] +=
    {
        LIST_2("gm_8Rnd_9x19mm_B_DM11_p1_blk")
    };
    linkedItems[] =
    {
        "ItemMap",
        "gm_ge_army_conat2",
        "ItemRadio",
        "gm_watch_kosei_80",
        "gm_ferod16_oli"
    };
};
class co : sl
{
    displayName = "Platoon Leader";
};
class fac : co
{
    displayName = "Forward Air Controller";
};
class ar : r
{
    displayName = "Automatic Rifleman";
    primaryWeapon[] = {"gm_mg3_blk"};
    vest[] = {"gm_dk_army_vest_54_machinegunner"};
	backpack[] = {};
    sidearmWeapon[] = {"gm_p1_blk"};
    magazines[] =
    {
        LIST_4("gm_120Rnd_762x51mm_B_T_DM21_mg3_grn"),
        "gm_handgrenade_frag_dm51",
        LIST_2("gm_8Rnd_9x19mm_B_DM11_p1_blk")
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
	backpack[] = {"gm_dk_army_backpack_73_oli"};
    backpackItems[] =
    {
        LIST_3("gm_120Rnd_762x51mm_B_T_DM21_mg3_grn")
    };
    linkedItems[] += {"gm_ferod16_oli"};
};
class rat : car
{
    displayName = "Rifleman (AT)";
    secondaryWeapon[] = {"gm_pzf84_oli"};
    secondaryAttachments[] = {"gm_feroz2x17_pzf84_blk"};
	backpack[] = {"gm_dk_army_backpack_73_oli"};
    magazines[] +=
    {
        LIST_3("gm_1Rnd_84x245mm_heat_t_DM22_carlgustaf")
    };
};
class dm : r
{
    displayName = "Designated Marksman";
    primaryWeapon[] = {"gm_g3a3_oli"};
    scope[] = {"gm_feroz24_blk"};
    magazines[] =
    {
        LIST_9("gm_20Rnd_762x51mm_B_T_DM21_g3_blk"),
        LIST_2("gm_handgrenade_frag_dm51")
    };
};
class mmgg : ar
{
    displayName = "MMG Gunner";
};
class mmgac : r
{
    displayName = "MMG Ammo Carrier";
	backpack[] = {"gm_dk_army_backpack_73_oli"};
    backpackItems[] =
    {
        LIST_3("gm_120Rnd_762x51mm_B_T_DM21_mg3_grn")
    };
};
class mmgag : aar
{
    displayName = "MMG Assistant Gunner";
    linkedItems[] =
    {
        "ItemMap",
        "gm_ge_army_conat2",
        "ItemRadio",
        "gm_watch_kosei_80",
        "gm_ferod16_oli"
    };
    backpackItems[] =
    {
        LIST_3("gm_120Rnd_762x51mm_B_T_DM21_mg3_grn")
    };
};
class hmgg : car
{
    displayName = "HMG Gunner";
    backPack[] = {"gm_dk_army_backpack_73_oli"};

};
class hmgac : r
{
    displayName = "HMG Ammo Carrier";
    backPack[] = {"gm_dk_army_backpack_73_oli"};
};
class hmgag : car
{
    displayName = "HMG Assistant Gunner";
    backPack[] = {"gm_dk_army_backpack_73_oli"};  
    linkedItems[] =
    {
        "ItemMap",
        "gm_ge_army_conat2",
        "ItemRadio",
        "gm_watch_kosei_80",
        "gm_ferod16_oli"
    };
};
class matg : car
{
    displayName = "MAT Gunner";
    secondaryWeapon[] = {"gm_pzf84_oli"};
    secondaryAttachments[] = {"gm_feroz2x17_pzf84_blk"};
	backpack[] = {"gm_dk_army_backpack_73_oli"};
    magazines[] +=
    {
        LIST_3("gm_1Rnd_84x245mm_heat_t_DM22_carlgustaf")
    };
};
class matac : r
{
    displayName = "MAT Ammo Carrier";
	backpack[] = {"gm_dk_army_backpack_73_oli"};
    backpackItems[] =
    {
        LIST_3("gm_1Rnd_84x245mm_heat_t_DM22_carlgustaf")
    };
};
class matag : car
{
    displayName = "MAT Assistant Gunner";
	backpack[] = {"gm_dk_army_backpack_73_oli"};
    linkedItems[] =
    {
        "ItemMap",
        "gm_ge_army_conat2",
        "ItemRadio",
        "gm_watch_kosei_80",
        "gm_ferod16_oli"
    };
    backpackItems[] =
    {
        LIST_3("gm_1Rnd_84x245mm_heat_t_DM22_carlgustaf")
    };
};
class hatg : car
{
    displayName = "HAT Gunner";
    backPack[] = {"gm_milan_launcher_weaponBag"};
};
class hatac : r
{
    displayName = "HAT Ammo Carrier";
    backPack[] = {"gm_dk_army_backpack_73_oli"};
};
class hatag : car
{
    displayName = "HAT Assistant Gunner";
    backPack[] = {"gm_dk_army_backpack_73_oli"};
    linkedItems[] =
    {
        "ItemMap",
        "gm_ge_army_conat2",
        "ItemRadio",
        "gm_watch_kosei_80",
        "gm_ferod16_oli"
    };
};
class mtrg : car
{
    displayName = "Mortar Gunner";
    backPack[] = {"gm_dk_army_backpack_73_oli"};
    linkedItems[] =
    {
        "ItemMap",
        "gm_ge_army_conat2",
        "ItemRadio",
        "gm_watch_kosei_80"
    };
};
class mtrac : r
{
    displayName = "Mortar Ammo Carrier";
    backPack[] = {"gm_dk_army_backpack_73_oli"};
};
class mtrag : car
{
    displayName = "Mortar Assistant Gunner";
    backPack[] = {"gm_dk_army_backpack_73_oli"};
    linkedItems[] =
    {
        "ItemMap",
        "gm_ge_army_conat2",
        "ItemRadio",
        "gm_watch_kosei_80",
        "gm_ferod16_oli"
    };
};
class samg : car
{
    displayName = "AA Missile Specialist";
	backpack[] = {"gm_dk_army_backpack_73_oli"};
};
class samag : car
{
    displayName = "AA Assistent Missile Specialist";
	backpack[] = {"gm_dk_army_backpack_73_oli"};
    linkedItems[] =
    {
        "ItemMap",
        "gm_ge_army_conat2",
        "ItemRadio",
        "gm_watch_kosei_80",
        "gm_ferod16_oli"
    };
};
class sn : dm
{
    displayName = "Sniper";
    headgear[] = {"gm_ge_headgear_hat_80_m62_oli"};
};
class sp : r
{
    displayName = "Spotter";
    linkedItems[] =
    {
        "ItemMap",
        "gm_ge_army_conat2",
        "ItemRadio",
        "gm_watch_kosei_80",
        "gm_ferod16_oli"
    };
};
class vc : smg
{
    displayName = "Vehicle Commander";    
	vest[] = {"gm_dk_army_vest_54_crew"};
    backpack[] = {};
    headgear[] = {"gm_ge_headgear_crewhat_80_blk"};
    linkedItems[] += {"gm_ferod16_oli"};
};
class vd : smg
{
    displayName = "Vehicle Driver";
	vest[] = {"gm_dk_army_vest_54_crew"};
    backpack[] = {};
    headgear[] = {"gm_ge_headgear_crewhat_80_blk"};
};
class vg : smg
{
    displayName = "Vehicle Gunner";
	vest[] = {"gm_dk_army_vest_54_crew"};
    backpack[] = {};
    headgear[] = {"gm_ge_headgear_crewhat_80_blk"};
};
class pp : smg
{
    displayName = "Helicopter Pilot";
};
class pcc : smg
{
    displayName = "Helicopter Crew Chief";
};
class pc : pcc
{
    displayName = "Helicopter Crew";
    backpackItems[] = {};
};
class eng : car
{
    displayName = "Combat Engineer (Explosives)";
	backpack[] = {"gm_dk_army_backpack_73_oli"};
    backpackItems[] = {
        "MineDetector",
        "gm_repairkit_01",
        LIST_4("gm_explosive_petn_charge")
    };
};
class engm : car
{
    displayName = "Combat Engineer (Mines)";
	backpack[] = {"gm_dk_army_backpack_73_oli"};
    items[] +=
    {
        LIST_2("gm_mine_ap_dm31")
    };
    backpackItems[] = {
        "MineDetector",
        "gm_repairkit_01",
        "gm_mine_at_dm21",
        "gm_explosive_petn_charge"
		
    };
};class jp : baseMan
{
    displayName = "Jet pilot";
};
class UAV : car
{
    displayName = "UAV Operator";
};