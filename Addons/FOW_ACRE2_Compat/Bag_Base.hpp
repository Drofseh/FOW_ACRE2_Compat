﻿class Bag_Base;

    class fow_b_torn_radio : Bag_Base {
        maximumLoad = 120;
        class TransportItems {
            class _xx_ACRE_PRC77 {
                count = 1;
                name = "ACRE_PRC77";
            };
        };
    };

    class fow_b_torn_radio_empty : fow_b_torn_radio {
        delete TransportItems;
    };

    class fow_b_us_radio : Bag_Base {
        maximumLoad = 120;
        class TransportItems {
            class _xx_ACRE_PRC77 {
                count = 1;
                name = "ACRE_PRC77";
            };
        };
    };

    class fow_b_us_radio_empty : fow_b_us_radio {
        delete TransportItems;
    };

class fow_b_uk_p37;

    class fow_b_uk_p37_radio : fow_b_uk_p37 {
        maximumLoad = 200;
        class TransportItems {
            class _xx_ACRE_PRC77 {
                count = 1;
                name = "ACRE_PRC77";
            };
        };
    };

    class fow_b_uk_p37_radio_empty : fow_b_uk_p37_radio {
        delete TransportItems;
    };

    class fow_b_uk_p37_radio_blanco : fow_b_uk_p37_radio {
        maximumLoad = 200;
    };

    class fow_b_uk_p37_radio_blanco_empty : fow_b_uk_p37_radio_blanco {
        delete TransportItems;
    };
