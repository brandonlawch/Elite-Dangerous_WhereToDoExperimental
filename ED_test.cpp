#include "engineers.h"
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxNumOfDoableModules = -1, numOfDoableModules = 0, targetEngineerIndex = -1;
vector<moduleTypes> modulesToEngin;
engineer engineers[] = {
    {"Bill Turner", "ALIOTH", 115},
    {"Broo Tarquin", "MUANG", 196},
    {"Colonel Bris Dekker", "SOL", 64},
    {"Chloe Sedesi", "SHENVE", 886},
    {"Didi Vaterman", "LEESTI", 54},
    {"Elvira Martuuk", "KHUN", 242},
    {"Felicity Farseer", "DECIAT", 101},
    {"Hera Tani", "KUWEMAKI", 259},
    {"Juri Ishmaak", "GIRYAK", 91},
    {"Lei Cheung", "LAKSAK", 120},
    {"Liz Ryder", "EURYBIA", 92},
    {"Lori Jameson", "SHINRARTA DEZHRA", 0},
    {"Marco Qwent", "SIRIUS", 62},
    {"Professor Palin", "ARQUE", 41},
    {"Ram Tah", "MEENE", 157},
    {"Selene Jean", "KUK", 102},
    {"The Dweller", "WYRD", 75},
    {"The Sarge", "BETA-3 TUCANI", 76},
    {"Tiana Fortune", "ACHENAR", 137},
    {"Tod McQuinn", "WOLF 397", 73},
    {"Zacariah Nemo", "YORU", 118}
};

void initEngineers() {
    engineers[engineers::BillTurner].updateModule(moduleTypes::LifeSupport);
    engineers[engineers::BillTurner].updateModule(moduleTypes::Sensors);
    engineers[engineers::BillTurner].updateModule(moduleTypes::PlasmaAccelerator);
    engineers[engineers::BillTurner].updateModule(moduleTypes::AFMS);
    engineers[engineers::BillTurner].updateModule(moduleTypes::DSS);
    engineers[engineers::BillTurner].updateModule(moduleTypes::FSWScanner);
    engineers[engineers::BillTurner].updateModule(moduleTypes::FuelScoop);
    engineers[engineers::BillTurner].updateModule(moduleTypes::KWScanner);
    engineers[engineers::BillTurner].updateModule(moduleTypes::ManifestScanner);
    engineers[engineers::BillTurner].updateModule(moduleTypes::Refinery);
    engineers[engineers::BillTurner].updateModule(moduleTypes::Armour);

    engineers[engineers::BrooTarquin].updateModule(moduleTypes::BeamLaser);
    engineers[engineers::BrooTarquin].updateModule(moduleTypes::BurstLaser);
    engineers[engineers::BrooTarquin].updateModule(moduleTypes::PulseLaser);

    engineers[engineers::ColonelBrisDekker].updateModule(moduleTypes::FSD);
    engineers[engineers::ColonelBrisDekker].updateModule(moduleTypes::FSDInterdictor);

    engineers[engineers::ChloeSedesi].updateModule(moduleTypes::FSD);
    engineers[engineers::ChloeSedesi].updateModule(moduleTypes::Thrusters);

    engineers[engineers::DidiVaterman].updateModule(moduleTypes::ShieldGenerator);
    engineers[engineers::DidiVaterman].updateModule(moduleTypes::ShieldBooster);

    engineers[engineers::ElviraMartuuk].updateModule(moduleTypes::FSD);
    engineers[engineers::ElviraMartuuk].updateModule(moduleTypes::ShieldGenerator);
    engineers[engineers::ElviraMartuuk].updateModule(moduleTypes::Thrusters);
    engineers[engineers::ElviraMartuuk].updateModule(moduleTypes::ShieldCellBank);

    engineers[engineers::FelicityFarseer].updateModule(moduleTypes::FSD);
    engineers[engineers::FelicityFarseer].updateModule(moduleTypes::PowerPlant);
    engineers[engineers::FelicityFarseer].updateModule(moduleTypes::Sensors);
    engineers[engineers::FelicityFarseer].updateModule(moduleTypes::Thrusters);
    engineers[engineers::FelicityFarseer].updateModule(moduleTypes::ShieldBooster);
    engineers[engineers::FelicityFarseer].updateModule(moduleTypes::FSDInterdictor);
    engineers[engineers::FelicityFarseer].updateModule(moduleTypes::DSS);

    engineers[engineers::HeraTani].updateModule(moduleTypes::PowerDistributor);
    engineers[engineers::HeraTani].updateModule(moduleTypes::PowerPlant);
    engineers[engineers::HeraTani].updateModule(moduleTypes::Sensors);
    engineers[engineers::HeraTani].updateModule(moduleTypes::DSS);

    engineers[engineers::JuriIshmaak].updateModule(moduleTypes::Sensors);
    engineers[engineers::JuriIshmaak].updateModule(moduleTypes::MineLauncher);
    engineers[engineers::JuriIshmaak].updateModule(moduleTypes::Missile);
    engineers[engineers::JuriIshmaak].updateModule(moduleTypes::SeekerMissile);
    engineers[engineers::JuriIshmaak].updateModule(moduleTypes::Torpedo);
    engineers[engineers::JuriIshmaak].updateModule(moduleTypes::DSS);
    engineers[engineers::JuriIshmaak].updateModule(moduleTypes::FSWScanner);
    engineers[engineers::JuriIshmaak].updateModule(moduleTypes::KWScanner);
    engineers[engineers::JuriIshmaak].updateModule(moduleTypes::ManifestScanner);

    engineers[engineers::LeiCheung].updateModule(moduleTypes::Sensors);
    engineers[engineers::LeiCheung].updateModule(moduleTypes::ShieldGenerator);
    engineers[engineers::LeiCheung].updateModule(moduleTypes::ShieldBooster);
    engineers[engineers::LeiCheung].updateModule(moduleTypes::DSS);

    engineers[engineers::LizRyder].updateModule(moduleTypes::Armour);
    engineers[engineers::LizRyder].updateModule(moduleTypes::HullReinforcementPackage);
    engineers[engineers::LizRyder].updateModule(moduleTypes::MineLauncher);
    engineers[engineers::LizRyder].updateModule(moduleTypes::Missile);
    engineers[engineers::LizRyder].updateModule(moduleTypes::SeekerMissile);
    engineers[engineers::LizRyder].updateModule(moduleTypes::Torpedo);

    engineers[engineers::LoriJameson].updateModule(moduleTypes::LifeSupport);
    engineers[engineers::LoriJameson].updateModule(moduleTypes::Sensors);
    engineers[engineers::LoriJameson].updateModule(moduleTypes::ShieldCellBank);
    engineers[engineers::LoriJameson].updateModule(moduleTypes::AFMS);
    engineers[engineers::LoriJameson].updateModule(moduleTypes::DSS);
    engineers[engineers::LoriJameson].updateModule(moduleTypes::FSWScanner);
    engineers[engineers::LoriJameson].updateModule(moduleTypes::FuelScoop);
    engineers[engineers::LoriJameson].updateModule(moduleTypes::KWScanner);
    engineers[engineers::LoriJameson].updateModule(moduleTypes::ManifestScanner);
    engineers[engineers::LoriJameson].updateModule(moduleTypes::Refinery);

    engineers[engineers::MarcoQwent].updateModule(moduleTypes::PowerDistributor);
    engineers[engineers::MarcoQwent].updateModule(moduleTypes::PowerPlant);

    engineers[engineers::ProfessorPalin].updateModule(moduleTypes::FSD);
    engineers[engineers::ProfessorPalin].updateModule(moduleTypes::Thrusters);

    engineers[engineers::RamTah].updateModule(moduleTypes::ChaffLauncher);
    engineers[engineers::RamTah].updateModule(moduleTypes::ECM);
    engineers[engineers::RamTah].updateModule(moduleTypes::HeatSinkLauncher);
    engineers[engineers::RamTah].updateModule(moduleTypes::PointDefence);
    engineers[engineers::RamTah].updateModule(moduleTypes::CollectorLimpet);
    engineers[engineers::RamTah].updateModule(moduleTypes::FuelLimpet);
    engineers[engineers::RamTah].updateModule(moduleTypes::HatchBreaker);
    engineers[engineers::RamTah].updateModule(moduleTypes::ProspectorLimpet);

    engineers[engineers::SeleneJean].updateModule(moduleTypes::Armour);
    engineers[engineers::SeleneJean].updateModule(moduleTypes::HullReinforcementPackage);

    engineers[engineers::TheDweller].updateModule(moduleTypes::PowerDistributor);
    engineers[engineers::TheDweller].updateModule(moduleTypes::BeamLaser);
    engineers[engineers::TheDweller].updateModule(moduleTypes::BurstLaser);
    engineers[engineers::TheDweller].updateModule(moduleTypes::PulseLaser);

    engineers[engineers::TheSarge].updateModule(moduleTypes::Cannon);
    engineers[engineers::TheSarge].updateModule(moduleTypes::RailGun);
    engineers[engineers::TheSarge].updateModule(moduleTypes::CollectorLimpet);
    engineers[engineers::TheSarge].updateModule(moduleTypes::FuelLimpet);
    engineers[engineers::TheSarge].updateModule(moduleTypes::HatchBreaker);
    engineers[engineers::TheSarge].updateModule(moduleTypes::ProspectorLimpet);

    engineers[engineers::TianaFortune].updateModule(moduleTypes::Sensors);
    engineers[engineers::TianaFortune].updateModule(moduleTypes::FSDInterdictor);
    engineers[engineers::TianaFortune].updateModule(moduleTypes::CollectorLimpet);
    engineers[engineers::TianaFortune].updateModule(moduleTypes::DSS);
    engineers[engineers::TianaFortune].updateModule(moduleTypes::FSWScanner);
    engineers[engineers::TianaFortune].updateModule(moduleTypes::FuelLimpet);
    engineers[engineers::TianaFortune].updateModule(moduleTypes::HatchBreaker);
    engineers[engineers::TianaFortune].updateModule(moduleTypes::KWScanner);
    engineers[engineers::TianaFortune].updateModule(moduleTypes::ManifestScanner);
    engineers[engineers::TianaFortune].updateModule(moduleTypes::ProspectorLimpet);

    engineers[engineers::TodMcQuinn].updateModule(moduleTypes::Cannon);
    engineers[engineers::TodMcQuinn].updateModule(moduleTypes::FRAG);
    engineers[engineers::TodMcQuinn].updateModule(moduleTypes::MultiCannon);
    engineers[engineers::TodMcQuinn].updateModule(moduleTypes::RailGun);

    engineers[engineers::ZacariahNemo].updateModule(moduleTypes::FRAG);
    engineers[engineers::ZacariahNemo].updateModule(moduleTypes::MultiCannon);
    engineers[engineers::ZacariahNemo].updateModule(moduleTypes::PlasmaAccelerator);
}

moduleTypes inputToEnum(string& input) {
    if (input == "A") { return moduleTypes::Armour; }
    if (input == "FSD") { return moduleTypes::FSD; }
    if (input == "PD") { return moduleTypes::PowerDistributor; }
    if (input == "PP") { return moduleTypes::PowerPlant; }
    if (input == "SG") { return moduleTypes::ShieldGenerator; }
    if (input == "T") { return moduleTypes::Thrusters; }
    if (input == "HRP") { return moduleTypes::HullReinforcementPackage; }
    if (input == "SB") { return moduleTypes::ShieldBooster; }
    if (input == "SCB") { return moduleTypes::ShieldCellBank; }
    if (input == "BML") { return moduleTypes::BeamLaser; }
    if (input == "BTL") { return moduleTypes::BurstLaser; }
    if (input == "C") { return moduleTypes::Cannon; }
    if (input == "FRAG") { return moduleTypes::FRAG; }
    if (input == "MINE") { return moduleTypes::MineLauncher; }
    if (input == "M") { return moduleTypes::Missile; }
    if (input == "MC") { return moduleTypes::MultiCannon; }
    if (input == "PA") { return moduleTypes::PlasmaAccelerator; }
    if (input == "PL") { return moduleTypes::PulseLaser; }
    if (input == "RG") { return moduleTypes::RailGun; }
    if (input == "SM") { return moduleTypes::SeekerMissile; }
    if (input == "TORP") { return moduleTypes::Torpedo; }
    return moduleTypes::invalid;
}

string getStringOfModule(moduleTypes module) {
    string tmp(moduleTypes_str[int(module)]);
    return tmp;
};

vector<moduleTypes> checking() {
    vector<moduleTypes> modulesDoable;
    maxNumOfDoableModules = 0;
    targetEngineerIndex = -1;
    for (int i = 0; i < numOfEngineer; i++) {
        numOfDoableModules = 0;
        for (auto thisModule : modulesToEngin) {
            if (engineers[i].haveModule(thisModule)) {
                numOfDoableModules++;
            }
        }
        if (numOfDoableModules == 0) {
            continue;
        }
        if (numOfDoableModules > maxNumOfDoableModules) {
            maxNumOfDoableModules = numOfDoableModules;
            targetEngineerIndex = i;
            vector<moduleTypes>().swap(modulesDoable);
            for (auto thisModule : modulesToEngin) {
                if (engineers[i].haveModule(thisModule)) {
                    modulesDoable.push_back(thisModule);
                }
            }
        }
        else if (numOfDoableModules == maxNumOfDoableModules) {
            if (engineers[i].getDistance() < engineers[targetEngineerIndex].getDistance()) {
                maxNumOfDoableModules = numOfDoableModules;
                targetEngineerIndex = i;
                vector<moduleTypes>().swap(modulesDoable);
                for (auto thisModule : modulesToEngin) {
                    if (engineers[i].haveModule(thisModule)) {
                        modulesDoable.push_back(thisModule);
                    }
                }
            }
        }
    }
    if (targetEngineerIndex == -1) {
        cout << "Critical Error: No Engineer Found For Module ";
        cin.sync();
        cin.get();
        exit(1);
    }
    return modulesDoable;
}

int main() {
    initEngineers();

    cout << "Input Modules To Engineer:" << endl;
    string input;
    while (std::cin >> input && input != "x" && input != "X") {
        moduleTypes inputEnum = inputToEnum(input);
        bool invalid = false;
        if (inputEnum == moduleTypes::invalid) {
            cout << "Invalid Input" << endl;
            invalid = true;
        }
        for (auto thisModule : modulesToEngin) {
            if (thisModule == inputEnum) {
                cout << "Duplicate Entry" << endl;
                invalid = true;
                break;
            }
        }
        if (invalid) {
            cin.clear();
            cin.ignore(INT_MAX, '\n');
            continue;
        }
        modulesToEngin.push_back({ inputEnum });
    }

    while (!modulesToEngin.empty()) {
        vector<moduleTypes> modulesDoable = checking();
        cout << "Do Engineering At " << engineers[targetEngineerIndex].getName() << " (" << engineers[targetEngineerIndex].getSystem() << " "
            << engineers[targetEngineerIndex].getDistance() << "Ly) For" << endl;
        for (auto thisModule : modulesDoable) {
            modulesToEngin.erase(remove(modulesToEngin.begin(), modulesToEngin.end(), thisModule));
            cout << getStringOfModule(thisModule) << " ";
        }
        cout << endl << endl;
    }

    cout << "Press Enter To Exit ";
    std::cin.sync();
    std::cin.get();
    return 0;
}