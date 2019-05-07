/* assignGear specific macros */
tooltip = "Author: Fingers";
class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
    uniform[] =
    {
        "gm_gc_army_uniform_soldier_80_str"
    };
    vest[] = {"gm_gc_bgs_vest_80_border_str"};
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
        "gm_gc_compass_f73",
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
        "gm_gc_army_headgear_hat_80_grn"
    };
    backpack[] = {};
    primaryWeapon[] = {"gm_mpikm72_brn","gm_mpikm72_prp"};
    magazines[] =
    {
        LIST_5("gm_30Rnd_762x39mm_B_M43_ak47_blk"),
        "gm_handgrenade_frag_rgd5"
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
	backpack[] = {"gm_gc_army_backpack_80_assaultpack_str"};
};
class car : r
{
    displayName = "Carabinier";	
    primaryWeapon[] = {"gm_mpikms72_brn","gm_mpikms72_prp"};
	magazines[] =
    {
        LIST_5("gm_30Rnd_762x39mm_B_M43_ak47_blk"),
        "gm_handgrenade_frag_rgd5"
    };
};
class m : car 
{
    displayName = "Medic";    
	backpack[] = {"gm_ge_backpack_satchel_80_san"};
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
		LIST_2("gm_smokeshell_wht_gc")
	};
};
class smg : r
{
    displayName = "Submachinegunner";
    primaryWeapon[] = {"gm_mpiaks74nk_brn","gm_mpiaks74nk_prp"};
    magazines[] =
    {
        LIST_2("gm_30Rnd_545x39mm_B_7N6_ak74_prp"),
        LIST_2("gm_30Rnd_545x39mm_B_7N6_ak74_org"),
        "gm_handgrenade_frag_rgd5"
    };
};
class ftl : r
{
    displayName = "Fireteam Leader";
	magazines[] +=
    {
		LIST_2("gm_smokeshell_wht_gc")
    };
    linkedItems[] += {"gm_df7x40_blk"};
};
class sl : ftl
{
    displayName = "Squad Leader";
    sidearmWeapon[] = {"gm_pm_blk"};
    magazines[] +=
    {
        LIST_2("gm_8Rnd_9x18mm_B_pst_pm_blk")
    };
    linkedItems[] =
    {
        "ItemMap",
        "gm_gc_compass_f73",
        "ItemRadio",
        "gm_watch_kosei_80",
        "gm_df7x40_blk"
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
    primaryWeapon[] = {"gm_lmgrpk_brn","gm_lmgrpk_prp"};
	backpack[] = {"gm_gc_army_backpack_80_assaultpack_str"};
    magazines[] =
    {
        LIST_4("gm_75Rnd_762x39mm_B_M43_ak47_blk"),
        "gm_handgrenade_frag_rgd5",
        LIST_2("gm_30Rnd_762x39mm_B_T_M43_ak47_blk")
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
	backpack[] = {"gm_gc_army_backpack_80_assaultpack_str"};
    backpackItems[] =
    {
        LIST_2("gm_75Rnd_762x39mm_B_M43_ak47_blk")
    };
    linkedItems[] += {"gm_ferod16_oli"};
};
class rat : r
{
    displayName = "Rifleman (AT)";
};
class dm : r
{
    displayName = "Designated Marksman";
};
class mmgg : ar
{
    displayName = "MMG Gunner";    
	primaryWeapon[] = {"gm_hmgpkm_prp"};
	backpack[] = {"gm_gc_army_backpack_80_lmg_str"};
    magazines[] =
    {
        LIST_4("gm_100Rnd_762x54mm_API_B32_pk_grn"),
        "gm_handgrenade_frag_rgd5"
    };
};
class mmgac : r
{
    displayName = "MMG Ammo Carrier";
	backpack[] = {"gm_gc_army_backpack_80_assaultpack_str"};
    backpackItems[] =
    {
        LIST_3("gm_100Rnd_762x54mm_API_B32_pk_grn")
    };
};
class mmgag : aar
{
    displayName = "MMG Assistant Gunner";
    linkedItems[] =
    {
        "ItemMap",
        "gm_gc_compass_f73",
        "ItemRadio",
        "gm_watch_kosei_80",
        "gm_df7x40_blk"
    };
    backpackItems[] =
    {
        LIST_3("gm_100Rnd_762x54mm_API_B32_pk_grn")
    };
};