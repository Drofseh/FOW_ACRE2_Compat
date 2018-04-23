class Plane_Base_F;

class fow_va_plane_base : Plane_Base_F {
    acre_hasInfantryPhone = 0;
    acre_infantryPhoneDisableRinging = 1;

    class AcreIntercoms {
        class Intercom_1 {
            displayName = "Crew Intercom";
            shortName = "ICom";
            allowedPositions[] = {"crew"};
            disabledPositions[] = {};
            limitedPositions[] = {{"cargo", "all"}};
            masterPositions[] = {"crew"};
            numLimitedPositions = 1;
            connectedByDefault = 1;
        };
    };

    class AcreRacks {
        class Rack_1 {
            displayName = "Air Radio";
            shortName = "Air";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {"driver","copilot"};
            disabledPositions[] = {};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"none"};
        };
        class Rack_2 {
            displayName = "Ground Radio";
            shortName = "Grnd";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {"driver","copilot"};
            disabledPositions[] = {};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"none"};
        };
    };
};

class fow_va_plane_base;

class fow_va_f6f_base : fow_va_plane_base {
    class AcreRacks {
        class Rack_1 {
            displayName = "Air Radio";
            shortName = "Air";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {"driver"};
            disabledPositions[] = {};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"none"};
        };
        class Rack_2 {
            displayName = "Ground Radio";
            shortName = "Grnd";
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

class fow_va_a6m_base : fow_va_plane_base {
    class AcreRacks {
        class Rack_1 {
            displayName = "Air Radio";
            shortName = "Air";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {"driver"};
            disabledPositions[] = {};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"none"};
        };
        class Rack_2 {
            displayName = "Ground Radio";
            shortName = "Grnd";
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
