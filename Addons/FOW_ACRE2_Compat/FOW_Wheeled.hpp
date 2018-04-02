class Car_F;

class Truck_F;

class Wheeled_APC_F;
/*
class fow_truppenfahrrad : Car_F {
};

class fow_willys : Car_F {
};

class fow_v_gmc : Truck_F {
};

class fow_v_kubelwagen : Car_F {
};
*/
class fow_v_sdkfz_222 : Wheeled_APC_F {
    acre_hasInfantryPhone = 0;
    acre_infantryPhoneDisableRinging = 1;
    acre_infantryPhonePosition[] = {0, 0, 0};
    acre_infantryPhoneControlActions[] = {};
    acre_infantryPhoneintercom[] = {};

    class AcreIntercoms {
    };

    class AcreRacks {
        class Rack_1 {
            displayName = "Vehicle Radio";
            shortName = "Rack";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {"gunner"};
            disabledPositions[] = {};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"none"};
        };
    };
};

class fow_v_sdkfz_234_1 : Wheeled_APC_F {
    acre_hasInfantryPhone = 0;
    acre_infantryPhoneDisableRinging = 1;
    acre_infantryPhonePosition[] = {0, 0, 0};
    acre_infantryPhoneControlActions[] = {};
    acre_infantryPhoneintercom[] = {};

    class AcreIntercoms {
    };

    class AcreRacks {
        class Rack_1 {
            displayName = "Vehicle Radio";
            shortName = "Rack";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {"driver"};
            disabledPositions[] = {};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"none"};
        };
    };
};
/*
class fow_v_type97_truck_ija : Truck_F {
};
*/
