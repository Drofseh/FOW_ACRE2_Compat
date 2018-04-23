class CfgPatches {
    class FOW_ACRE2_Compat {
        author = "Wilhelm Haas (Drofseh)";
        authors[] = {"Wilhelm Haas (Drofseh)"};
        requiredVersion = 0.1;
        requiredAddons[] = {"acre_main","acre_sys_rack","acre_sys_intercom","fow_main","fow_weapons_c","fow_characters_c","fow_characters_items_c","fow_air_c","fow_boats_c","fow_cars_c","fow_tanks_c","fow_tracked_c","fow_trucks_c"};
        units[] = {};
        weapons[] = {};
        magazines[] = {};
        ammo[] = {};
    };
};

class cfgVehicles {

    #include "Bag_Base.hpp"

    #include "FOW_Boats.hpp"

    #include "FOW_Planes.hpp"

    #include "FOW_Tanks.hpp"

    #include "FOW_Wheeled.hpp"

    #include "FOW_WheeledTracked.hpp"
};
