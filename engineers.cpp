#include "engineers.h"
using namespace std;

modules::modules() {
    for (int i = 0; i < numOfModules; i++) {
        modulesList[i] = false;
    };
}

engineer::engineer(const string& name, const string& system, const int& dist) {
    engineerName = name;
    engineerSystem = system;
    distanceFromShinrarta = dist;
}