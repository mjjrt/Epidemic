#include <iostream>
#include <cmath>
#include <cstdlib>

#include "Person.h"
#include "Simulation.h"

int main (int argc, char **argv)
{
    if (argc < 2 || argc > 4){
        std::cout << "Usage: " << argv[0] << " <Timesteps> <Population>" << std::endl;
        return EXIT_FAILURE;
    }

    int time = atoi(argv[1]);
    int PopSize = atoi(argv[2]);
    Simulation sim(time, PopSize);
    sim.RunSimulation();

    return EXIT_SUCCESS;
}
