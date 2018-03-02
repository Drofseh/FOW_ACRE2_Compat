class CfgPatches {
    class FOW_ACRE2_Compat {
        author = "Wilhelm Haas (Drofseh)";
        authors[] = {"Wilhelm Haas (Drofseh)"};
        requiredVersion = 0.1;
        requiredAddons[] = {"acre_main","acre_sys_rack","acre_sys_intercom","fow_main","fow_weapons_c.pbo","fow_characters_c.pbo","fow_characters_items_c.pbo","fow_main.pbo"};
        units[] = {};
        weapons[] = {};
        magazines[] = {};
        ammo[] = {};
    };
};

class cfgVehicles {
    #include "Bag_Base.hpp"
    #include "FOW_Boats.hpp"
    #include "FOW_Tanks.hpp"
    #include "FOW_Wheeled.hpp"
    #include "FOW_WheeledTracked.hpp"
};
