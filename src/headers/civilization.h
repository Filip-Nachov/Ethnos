#pragma once
#include <string> 

class Civilization {
private:
    std::string name;
    int population;
    int economy;
    double culture;
    double politicalPower;
    double stability;

public:
    Civilization(const std::string& name, int population);

    void tick();
    std::string getName();
    void setName(std::string name);
    int getPopulation();
    int setPopulation(int pop);
};
