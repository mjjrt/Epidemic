#include <iostream>
#include <cmath>


#include "Person.h"
#include "Simulation.h"

int main (int argc, char *argv[])
{
    Simulation sim(100, 1000);
    sim.RunSimulation();

    return EXIT_SUCCESS;
}
