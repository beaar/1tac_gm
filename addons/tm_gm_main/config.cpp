#include "script_component.hpp"

class cfgPatches {
	class ADDON {
        name = "1Tac Global Mobilization: Main";
		author = "1Tac";
		url = "http://www.teamonetactical.com";
		units[] = {};
		weapons[] = {};
		requiredVersion = REQUIRED_VERSION;
		/* Require CBA and all components below */
		requiredAddons[] = {"tac1_tm_main"};
		VERSION_CONFIG;
	};
};