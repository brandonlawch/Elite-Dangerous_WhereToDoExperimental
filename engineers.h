#ifndef ENGINEERS_H
#define ENGINEERS_H

#include <string>

const int numOfModules = 39;
const int numOfEngineer = 21;

enum engineers {
    BillTurner = 0,
    BrooTarquin,
    ColonelBrisDekker,
    ChloeSedesi,
    DidiVaterman,
    ElviraMartuuk,
    FelicityFarseer,
    HeraTani,
    JuriIshmaak,
    LeiCheung,
    LizRyder,
    LoriJameson,
    MarcoQwent,
    ProfessorPalin,
    RamTah,
    SeleneJean,
    TheDweller,
    TheSarge,
    TianaFortune,
    TodMcQuinn,
    ZacariahNemo,
    EtienneDorn,
    MarshaHicks,
    MelBrandon,
    PetraOlmanova,
};

enum moduleTypes {
    Armour = 0,
    FSD,
    LifeSupport,
    PowerDistributor,
    PowerPlant,
    Sensors,
    ShieldGenerator,
    Thrusters,

    ChaffLauncher,
    ECM,
    HeatSinkLauncher,
    HullReinforcementPackage,
    PointDefence,
    ShieldBooster,
    ShieldCellBank,

    BeamLaser,
    BurstLaser,
    Cannon,
    FRAG,
    FSDInterdictor,
    MineLauncher,
    Missile,
    MultiCannon,
    PlasmaAccelerator,
    PulseLaser,
    RailGun,
    SeekerMissile,
    Torpedo,

    AFMS,
    CollectorLimpet,
    DSS,
    FSWScanner,
    FuelScoop,
    FuelLimpet,
    HatchBreaker,
    KWScanner,
    ManifestScanner,
    ProspectorLimpet,
    Refinery,
    invalid,
};
static const char* moduleTypes_str[] = {
    "Armour",
    "FSD",
    "LifeSupport",
    "PowerDistributor",
    "PowerPlant",
    "Sensors",
    "ShieldGenerator",
    "Thrusters",

    "ChaffLauncher",
    "ECM",
    "HeatSinkLauncher",
    "HullReinforcementPackage",
    "PointDefence",
    "ShieldBooster",
    "ShieldCellBank",

    "BeamLaser",
    "BurstLaser",
    "Cannon",
    "FRAG",
    "FSDInterdictor",
    "MineLauncher",
    "Missile",
    "MultiCannon",
    "PlasmaAccelerator",
    "PulseLaser",
    "RailGun",
    "SeekerMissile",
    "Torpedo",

    "AFMS",
    "CollectorLimpet",
    "DSS",
    "FSWScanner",
    "FuelScoop",
    "FuelLimpet",
    "HatchBreaker",
    "KWScanner",
    "ManifestScanner",
    "ProspectorLimpet",
    "Refinery"
};

class modules {
public:
    modules();
    bool haveModule(moduleTypes target) { return modulesList[target]; };
    void updateModule(moduleTypes target) { modulesList[target] = true; };
private:
    bool modulesList[numOfModules];
};

class engineer : public modules {
public:
    engineer(const std::string& name, const std::string& system, const int& dist);
    int getDistance() { return distanceFromShinrarta; };
    std::string getName() { return engineerName; }
    std::string getSystem() { return engineerSystem; }
private:
    std::string engineerName;
    std::string engineerSystem;
    int distanceFromShinrarta;
};
#endif