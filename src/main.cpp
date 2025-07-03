#include <iostream>
#include <thread>
#include <chrono>
#include "headers/civilization.h"

int main() {
    Civilization Civ("Emparia", 10);
    while (true) {
        std::this_thread::sleep_for(std::chrono::seconds(1));
        Civ.tick(Civ); 
        Civ.printStats(Civ);
    }
    return 0;
}

