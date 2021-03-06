#include <cmath>
#include <cstdlib>
#include <iostream>

#include "Person.h"
#include "Simulation.h"

int main(int argc, char **argv) {
  if (argc < 2 || argc > 4) {
    std::cout << "Usage: " << argv[0] << " <Timesteps> <Population>"
              << std::endl;
    return EXIT_FAILURE;
  }

  int time = atoi(argv[1]);
  size_t PopSize = atoi(argv[2]);
  Simulation sim(time, PopSize);
  //    Simulation sim;
  sim.RunSimulation();

  return EXIT_SUCCESS;
}
