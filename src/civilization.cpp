#include "headers/civilization.h"
#include <iostream>
#include <string>


Civilization::Civilization(const std::string& name, int population)
    : name(name), population(population)
{}


void Civilization::tick(Civilization& Civ) {
   if (Civ.time[0] != 60) Civ.time[0]++;
   else {
       if (Civ.time[1] != 60) { 
           Civ.time[0] = 0;
           Civ.time[1]++;
        }
       else Civ.time[2]++;
   }
}

void Civilization::printStats(const Civilization& Civ) {
    std::cout << "Statistics for " << Civ.name << '\n';
    std::cout << "------------------------------------\n";
    std::cout << "Population - " << Civ.population << '\n';
    std::cout << getFormattedTime() << '\n';
}

std::string Civilization::getName(const Civilization& Civ) {
    return Civ.name; 
}

int Civilization::getPopulation(const Civilization& Civ) {
    return Civ.population;
}

std::string Civilization::getFormattedTime() const {
    std::ostringstream oss;
    oss << "time spent: " << time[0] << "s " << time[1] << "m " << time[2] << "h";
    return oss.str();
}

