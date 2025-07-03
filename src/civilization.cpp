#include "headers/civilization.h"
#include <iostream>
#include <string>

void Civilization::tick(Civilization& Civ) {
   if (Civ.time[0] != 60) Civ.time[0]++;
   std::cout << Civ.fTime << '\n'; 
}

std::string Civilization::getName(const Civilization& Civ) {
    return Civ.name; 
}

int Civilization::getPopulation(const Civilization& Civ) {
    return Civ.population;
}
