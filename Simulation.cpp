#include <iostream>

#include "Simulation.h"

using namespace std;

void Simulation::RunSimulation()
{
    for (int i = 0; i < n_timesteps; i++)
    {
        std::cout << "Moving People " << i << '\n';
        for (size_t j = 0; j < people.size(); j++)
        {
            //people[j].CheckStatus();
            people[j].move();
        }
    }
    std::cout << "Finished Simulation" << std::endl;
}

