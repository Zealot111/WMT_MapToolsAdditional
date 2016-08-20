class CfgPatches {
    class rbc_ace_settings {

    };




};


class ACE_Settings {
    //Minimum mamage needed to trigger falling down while moving. Set to -1 to disable completely.
    class ace_hitreactions_minDamageToTrigger {
        value = -1;
        force = 1;
        isClientSettable = 0;
    };
    class ace_medical_playerDamageThreshold {
        value = 0.5;
        force = 1;
        isClientSettable = 0;
    };
    class ace_medical_preventInstaDeath {
        value = 0;
        force = 1;
        isClientSettable = 0;
    };
    class ace_ace_frag_Enabled {
        value = 1;
        force = 1;
        isClientSettable = 0;
    };
    class ace_hearing_disableEarRinging {
        value = 1;
        isClieentSettable = 0;

    };
};

class ACE_Medical_Actions {
    class Basic {
        class Bandage {
            treatmentTime = 10;
        };
    };
};
