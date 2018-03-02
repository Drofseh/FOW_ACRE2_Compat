class Bag_Base;

    class fow_b_torn_radio : B_LIB_AssaultPack_Base {
        maximumLoad = 120;
        // None of the Transport classes appear to be able to add ACRE radios
        /*
        class TransportWeapons {
            class _xx_ACRE_PRC77 {
                count = 1;
                weapon = "ACRE_PRC77";
            };
        };
        */
    };

    class fow_b_us_radio : Bag_Base {
        maximumLoad = 120;
    };

class fow_b_uk_p37;

    class fow_b_uk_p37_radio : fow_b_uk_p37 {
        maximumLoad = 200;
    };

    class fow_b_uk_p37_radio_blanco : fow_b_uk_p37_radio {
        maximumLoad = 200;
    };
