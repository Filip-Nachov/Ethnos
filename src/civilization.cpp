#include "headers/civilization.h"
#include <iostream>
#include <string>

void Civilization::tick(const Civilization& Civ) {
    
}

std::string Civilization::getName(const Civilization& Civ) {
    return Civ.name; 
}

int Civilization::getPopulation(const Civilization& Civ) {
    return Civ.population;
}
