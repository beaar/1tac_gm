/* assignGear specific macros */
tooltip = "Author: Fingers";
class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
    uniform[] =
    {
        "gm_ge_bgs_uniform_soldier_80_smp"
    };
    vest[] = {"gm_ge_bgs_vest_80_rifleman"};
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
        "gm_ge_bgs_headgear_m35_53_blk",
        "gm_ge_bgs_headgear_m35_53_net_blk"
    };
    backpack[] = {};
    primaryWeapon[] = {"gm_g3a3_blk"};
    magazines[] =
    {
        LIST_6("gm_20Rnd_762x51mm_B_DM111_g3_blk"),
        "gm_handgrenade_frag_dm51"
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
	backpack[] = {"gm_ge_army_backpack_80_oli"};
    magazines[] +=
    {
        LIST_5("gm_1rnd_67mm_heat_dm22a1_g3")
    };
};
class car : r
{
    displayName = "Carabinier";	
    primaryWeapon[] = {"gm_g3a4_blk"};
	magazines[] =
    {
        LIST_6("gm_20Rnd_762x51mm_B_DM111_g3_blk"),
        "gm_handgrenade_frag_dm51"
    };
};
class m : car 
{
    displayName = "Medic";    
	backpack[] = {"gm_ge_army_backpack_80_oli"};
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
		"gm_smokeshell_wht_dm25"
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
    vest[] = {"gm_ge_army_vest_80_machinegunner"};
	backpack[] = {"gm_ge_army_backpack_80_oli"};
    sidearmWeapon[] = {"gm_p1_blk"};
    magazines[] =
    {
        LIST_3("gm_120Rnd_762x51mm_B_T_DM21_mg3_grn"),
        "gm_handgrenade_frag_dm51",
        LIST_2("gm_8Rnd_9x19mm_B_DM11_p1_blk")
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
	backpack[] = {"gm_ge_army_backpack_80_oli"};
    backpackItems[] =
    {
        LIST_3("gm_120Rnd_762x51mm_B_T_DM21_mg3_grn")
    };
    linkedItems[] += {"gm_ferod16_oli"};
};
class rat : car
{
    displayName = "Rifleman (AT)";
};
class dm : r
{
    displayName = "Designated Marksman";
    primaryWeapon[] = {"gm_g3a3_oli"};
    scope[] = {"gm_feroz24_blk"};
    magazines[] =
    {
        LIST_6("gm_20Rnd_762x51mm_B_T_DM21_g3_blk"),
        "gm_handgrenade_frag_dm51"
    };
};
class mmgg : ar
{
    displayName = "MMG Gunner";
};
class mmgac : r
{
    displayName = "MMG Ammo Carrier";
	backpack[] = {"gm_ge_army_backpack_80_oli"};
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