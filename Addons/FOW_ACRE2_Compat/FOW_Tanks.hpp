class Tank_F;

class fow_v_cromwell : Tank_F {
    acre_hasInfantryPhone = 1;
    acre_infantryPhoneDisableRinging = 0;
    acre_infantryPhonePosition[] = {0, 0, 0};
    acre_infantryPhoneControlActions[] = {"all"};
    acre_infantryPhoneIntercom[] = {"all"};
    acre_infantryPhoneCustomRinging[] = {"FOW_ACRE2_Compat\Sound\InFoneUK.wss",4,1,1,40};

    class AcreIntercoms {
        class Intercom_1 {
            displayName = "Crew Intercom";
            shortName = "ICom";
            allowedPositions[] = {"crew"};
            disabledPositions[] = {};
            limitedPositions[] = {};
            masterPositions[] = {"commander"};
            numLimitedPositions = 0;
            connectedByDefault = 1;
        };
    };

    class AcreRacks {
        class Rack_1 {
            displayName = "Vehicle Radio";
            shortName = "Rack";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {{"turret", {0,2}}};
            disabledPositions[] = {};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"intercom_1"};
        };
    };
};

class fow_v_lvta2 : Tank_F {
    acre_hasInfantryPhone = 0;
    acre_infantryPhoneDisableRinging = 1;
    acre_infantryPhonePosition[] = {0, 0, 0};
    acre_infantryPhoneControlActions[] = {"all"};
    acre_infantryPhoneIntercom[] = {"all"};
    acre_infantryPhoneCustomRinging[] = {"FOW_ACRE2_Compat\Sound\InFoneUS.wss",6,1,1,40};

    class AcreIntercoms {
        class Intercom_1 {
            displayName = "Crew Intercom";
            shortName = "ICom";
            allowedPositions[] = {"crew", {"cargo", 0}};
            disabledPositions[] = {};
            limitedPositions[] = {};
            masterPositions[] = {"commander"};
            numLimitedPositions = 0;
            connectedByDefault = 1;
        };
    };

    class AcreRacks {
        class Rack_1 {
            displayName = "Vehicle Radio";
            shortName = "Rack";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {"driver", {"cargo", 0}};
            disabledPositions[] = {};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"none"};
        };
    };
};

class fow_v_m4a2 : Tank_F {
    acre_hasInfantryPhone = 1;
    acre_infantryPhoneDisableRinging = 0;
    acre_infantryPhonePosition[] = {0, 0, 0};
    acre_infantryPhoneControlActions[] = {"all"};
    acre_infantryPhoneIntercom[] = {"all"};
    acre_infantryPhoneCustomRinging[] = {"FOW_ACRE2_Compat\Sound\InFoneUS.wss",6,1,1,40};

    class AcreIntercoms {
        class Intercom_1 {
            displayName = "Crew Intercom";
            shortName = "ICom";
            allowedPositions[] = {"crew"};
            disabledPositions[] = {};
            limitedPositions[] = {};
            masterPositions[] = {"commander"};
            numLimitedPositions = 0;
            connectedByDefault = 1;
        };
    };

    class AcreRacks {
        class Rack_1 {
            displayName = "Vehicle Radio";
            shortName = "Rack";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {{"turret", {0,1}}};
            disabledPositions[] = {};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"intercom_1"};
        };
    };
};

class fow_v_m5a1 : Tank_F {
    acre_hasInfantryPhone = 1;
    acre_infantryPhoneDisableRinging = 0;
    acre_infantryPhonePosition[] = {0, 0, 0};
    acre_infantryPhoneControlActions[] = {"all"};
    acre_infantryPhoneIntercom[] = {"all"};
    acre_infantryPhoneCustomRinging[] = {"FOW_ACRE2_Compat\Sound\InFoneUS.wss",6,1,1,40};

    class AcreIntercoms {
        class Intercom_1 {
            displayName = "Crew Intercom";
            shortName = "ICom";
            allowedPositions[] = {"crew"};
            disabledPositions[] = {};
            limitedPositions[] = {};
            masterPositions[] = {"commander"};
            numLimitedPositions = 0;
            connectedByDefault = 1;
        };
    };

    class AcreRacks {
        class Rack_1 {
            displayName = "Vehicle Radio";
            shortName = "Rack";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {{"turret", {0,1}}};
            disabledPositions[] = {};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"intercom_1"};
        };
    };
};

class fow_v_panther : Tank_F {
    acre_hasInfantryPhone = 1;
    acre_infantryPhoneDisableRinging = 0;
    acre_infantryPhonePosition[] = {0, 0, 0};
    acre_infantryPhoneControlActions[] = {"all"};
    acre_infantryPhoneIntercom[] = {"all"};
    acre_infantryPhoneCustomRinging[] = {"FOW_ACRE2_Compat\Sound\InFoneGer.wss",7,1,1,40};

    class AcreIntercoms {
        class Intercom_1 {
            displayName = "Crew Intercom";
            shortName = "ICom";
            allowedPositions[] = {"crew"};
            disabledPositions[] = {};
            limitedPositions[] = {};
            masterPositions[] = {"commander"};
            numLimitedPositions = 0;
            connectedByDefault = 1;
        };
    };

    class AcreRacks {
        class Rack_1 {
            displayName = "Vehicle Radio";
            shortName = "Rack";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {{"turret", {0,1}}};
            disabledPositions[] = {};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"intercom_1"};
        };
    };
};

class fow_v_type95_HaGo : Tank_F {
    acre_hasInfantryPhone = 1;
    acre_infantryPhoneDisableRinging = 0;
    acre_infantryPhonePosition[] = {0, 0, 0};
    acre_infantryPhoneControlActions[] = {"all"};
    acre_infantryPhoneIntercom[] = {"all"};
    acre_infantryPhoneCustomRinging[] = {"FOW_ACRE2_Compat\Sound\InFoneGer.wss",7,1,1,40};

    class AcreIntercoms {
        class Intercom_1 {
            displayName = "Crew Intercom";
            shortName = "ICom";
            allowedPositions[] = {"crew"};
            disabledPositions[] = {};
            limitedPositions[] = {};
            masterPositions[] = {"commander"};
            numLimitedPositions = 0;
            connectedByDefault = 1;
        };
    };

    class AcreRacks {
    };
};

class fow_v_universalCarrier : Tank_F {
    acre_hasInfantryPhone = 0;
    acre_infantryPhoneDisableRinging = 1;
    acre_infantryPhonePosition[] = {0, 0, 0};
    acre_infantryPhoneControlActions[] = {};
    acre_infantryPhoneintercom[] = {};

    class AcreIntercoms {
    };

    class AcreRacks {
    };
};
