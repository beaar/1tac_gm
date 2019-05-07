#include "script_component.hpp"

class CfgPatches
{
    class ADDON
    {
        name = "1Tac Global Mobilization Loadouts for TMF";
        author = "1TAC";
        url = "http://www.teamonetactical.com";
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tac1_tm_gm_main"};
        VERSION_CONFIG;
    };
};

#include "macros.hpp"

#include "CfgLoadouts.hpp"
