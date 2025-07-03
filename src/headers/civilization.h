#pragma once
#include <string> 
#include <format>
#include <vector>
#include <sstream>

class Civilization {
private:
    std::string name;
    std::vector<int> time = {0, 0, 0};
    int population;
    int economy;
    double culture;
    double politicalPower;
    double stability;

public:
    Civilization(const std::string& name, int population);

    std::string getFormattedTime() const;
    void tick(Civilization& Civ);
    std::string getName(const Civilization& Civ);
    void setName(std::string name);
    void printStats(const Civilization& Civ);
    int getPopulation(const Civilization& Civ);
    int setPopulation(int pop);
};
