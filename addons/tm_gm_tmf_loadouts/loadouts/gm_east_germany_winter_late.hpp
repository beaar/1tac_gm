/* assignGear specific macros */
tooltip = "Author: Fingers";
class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    faces[] = {"faceset:caucasian"};
    // All randomized.
    uniform[] =
    {
        "gm_gc_army_uniform_soldier_80_win"
    };
    vest[] = {"gm_gc_army_vest_80_rifleman_str"};
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
		"gm_gc_army_headgear_m56_cover_win"
    };
    backpack[] = {};
    primaryWeapon[] = {"gm_mpiak74n_brn","gm_mpiak74n_prp"};
    magazines[] =
    {
        LIST_4("gm_30Rnd_545x39mm_B_7N6_ak74_prp"),
		LIST_4("gm_30Rnd_545x39mm_B_7N6_ak74_org"),
        LIST_2("gm_handgrenade_frag_rgd5")
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
    primaryWeapon[] = {"gm_mpiaks74n_prp","gm_mpiaks74n_brn"};
	magazines[] =
    {
        LIST_4("gm_30Rnd_545x39mm_B_7N6_ak74_prp"),
		LIST_4("gm_30Rnd_545x39mm_B_7N6_ak74_org"),
        LIST_2("gm_handgrenade_frag_rgd5")
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
        LIST_3("gm_30Rnd_545x39mm_B_7N6_ak74_prp"),
        LIST_3("gm_30Rnd_545x39mm_B_7N6_ak74_org"),
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
    vest[] = {"gm_gc_army_vest_80_leader_str"};
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
    primaryWeapon[] = {"gm_lmgrpk74n_brn","gm_lmgrpk74n_prp"};
    vest[] = {"gm_gc_army_vest_80_lmg_str"};
	backpack[] = {"gm_gc_army_backpack_80_assaultpack_str"};
    magazines[] =
    {
        LIST_4("gm_45Rnd_545x39mm_B_7N6_ak74_org"),
        LIST_4("gm_30Rnd_545x39mm_B_7N6_ak74_prp"),
        "gm_handgrenade_frag_rgd5",
		"gm_30Rnd_545x39mm_B_T_7T3_ak74_prp"
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
    vest[] = {"gm_gc_army_vest_80_lmg_str"};
	backpack[] = {"gm_gc_army_backpack_80_assaultpack_str"};
    backpackItems[] =
    {
        LIST_4("gm_45Rnd_545x39mm_B_7N6_ak74_org"),
        LIST_4("gm_45Rnd_545x39mm_B_7N6_ak74_prp"),
    };
    linkedItems[] += {"gm_ferod16_oli"};
};
class rat : r
{
    displayName = "Rifleman (AT)";
    vest[] = {"gm_gc_army_vest_80_at_str"};
    secondaryWeapon[] = {"gm_rpg7_prp"};	
    secondaryAttachments[] = {"gm_pgo7v_blk"};
	backpack[] = {"gm_gc_army_backpack_80_at_str"};
    backpackItems[] =
    {
        LIST_3("gm_1Rnd_40mm_heat_pg7v_rpg7")
    };
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
class hmgg : car
{
    displayName = "HMG Gunner";
    backPack[] = {"gm_gc_army_backpack_80_assaultpack_str"};

};
class hmgac : r
{
    displayName = "HMG Ammo Carrier";
    backPack[] = {"gm_gc_army_backpack_80_assaultpack_str"};
};
class hmgag : car
{
    displayName = "HMG Assistant Gunner";
    backPack[] = {"gm_gc_army_backpack_80_assaultpack_str"};  
	backpackItems[] =
    {
        LIST_3("gm_1Rnd_84x245mm_heat_t_DM22_carlgustaf")
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
class matg : car
{
    displayName = "MAT Gunner";
    vest[] = {"gm_gc_army_vest_80_at_str"};
    secondaryWeapon[] = {"gm_rpg7_prp"};	
    secondaryAttachments[] = {"gm_pgo7v_blk"};
	backpack[] = {"gm_gc_army_backpack_80_at_str"};
    backpackItems[] =
    {
        LIST_3("gm_1Rnd_40mm_heat_pg7v_rpg7")
    };
};
class matac : r
{
    displayName = "MAT Ammo Carrier";
	backpack[] = {"gm_gc_army_backpack_80_at_str"};
    backpackItems[] =
    {
        LIST_3("gm_1Rnd_40mm_heat_pg7v_rpg7")
    };
};
class matag : car
{
    displayName = "MAT Assistant Gunner";
	backpack[] = {"gm_gc_army_backpack_80_at_str"};
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
        LIST_3("gm_1Rnd_40mm_heat_pg7v_rpg7")
    };
};
class hatg : car
{
    displayName = "HAT Gunner";
    backPack[] = {"gm_fagot_launcher_weaponBag"};
};
class hatac : r
{
    displayName = "HAT Ammo Carrier";
    backPack[] = {"gm_gc_army_backpack_80_assaultpack_str"};
};
class hatag : car
{
    displayName = "HAT Assistant Gunner";
    backPack[] = {"gm_gc_army_backpack_80_assaultpack_str"};
    linkedItems[] =
    {
        "ItemMap",
        "gm_gc_compass_f73",
        "ItemRadio",
        "gm_watch_kosei_80",
        "gm_df7x40_blk"
    };
};
class mtrg : car
{
    displayName = "Mortar Gunner";
    backPack[] = {"gm_gc_army_backpack_80_assaultpack_str"};
    linkedItems[] =
    {
        "ItemMap",
        "gm_gc_compass_f73",
        "ItemRadio",
        "gm_watch_kosei_80"
    };
};
class mtrac : r
{
    displayName = "Mortar Ammo Carrier";
    backPack[] = {"gm_gc_army_backpack_80_assaultpack_str"};
};
class mtrag : car
{
    displayName = "Mortar Assistant Gunner";
    backPack[] = {"gm_gc_army_backpack_80_assaultpack_str"};
    linkedItems[] =
    {
        "ItemMap",
        "gm_gc_compass_f73",
        "ItemRadio",
        "gm_watch_kosei_80",
        "gm_df7x40_blk"
    };
};
class samg : car
{
    displayName = "AA Missile Specialist";
	backpack[] = {"gm_gc_army_backpack_80_assaultpack_str"};
};
class samag : car
{
    displayName = "AA Assistent Missile Specialist";
	backpack[] = {"gm_gc_army_backpack_80_assaultpack_str"};
    linkedItems[] =
    {
        "ItemMap",
        "gm_gc_compass_f73",
        "ItemRadio",
        "gm_watch_kosei_80",
        "gm_df7x40_blk"
    };
};
class sn : dm
{
    displayName = "Sniper";
};
class sp : r
{
    displayName = "Spotter";
    linkedItems[] =
    {
        "ItemMap",
        "gm_gc_compass_f73",
        "ItemRadio",
        "gm_watch_kosei_80",
        "gm_df7x40_blk"
    };
};
class vc : smg
{
    displayName = "Vehicle Commander";
	uniform[] = {"gm_gc_army_uniform_soldier_80_blk"};
	vest[] = {"gm_gc_army_vest_80_belt_str"};
    headgear[] = {"gm_gc_army_headgear_crewhat_80_blk"};
    backpack[] = {};
    linkedItems[] += {"gm_ferod16_oli"};
};
class vd : smg
{
    displayName = "Vehicle Driver";
	uniform[] = {"gm_gc_army_uniform_soldier_80_blk"};
	vest[] = {"gm_gc_army_vest_80_belt_str"};
    headgear[] = {"gm_gc_army_headgear_crewhat_80_blk"};
    backpack[] = {};
};
class vg : smg
{
    displayName = "Vehicle Gunner";
	uniform[] = {"gm_gc_army_uniform_soldier_80_blk"};
	vest[] = {"gm_gc_army_vest_80_belt_str"};
    headgear[] = {"gm_gc_army_headgear_crewhat_80_blk"};
    backpack[] = {};
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
    vest[] = {"gm_ge_army_vest_80_demolition"};
	backpack[] = {"gm_gc_army_backpack_80_assaultpack_lmg_str"};
    backpackItems[] = {
        "MineDetector",
        "gm_repairkit_01",
        LIST_4("gm_explosive_plnp_charge")
    };
};
class engm : car
{
    displayName = "Combat Engineer (Mines)";
    vest[] = {"gm_ge_army_vest_80_demolition"};
	backpack[] = {"gm_gc_army_backpack_80_assaultpack_lmg_str"};
    items[] +=
    {
        LIST_2("gm_mine_ap_dm31")
    };
    backpackItems[] = {
        "MineDetector",
        "gm_repairkit_01",
        "gm_mine_at_tm46",
        "gm_explosive_plnp_charge"
		
    };
};class jp : baseMan
{
    displayName = "Jet pilot";
};
class UAV : car
{
    displayName = "UAV Operator";
};