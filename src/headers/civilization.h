#pragma once
#include <string> 
#include <format>
#include <vector>


class Civilization {
private:
    std::string name;
    std::vector<int> time = {0, 0, 0};
    std::string fTime = std::format("time spent: {}s {}m {}h", time[0], time[1], time[2]);
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
