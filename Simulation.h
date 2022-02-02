#pragma once

#include <vector>
#include <cstddef>

#include "Person.h"

#ifndef SIMULATION_H_
#define SIMULATION_H_


struct Simulation
{
private:
    int n_timesteps;
    size_t n_people;
    std::vector<Person> people;

public:
    Simulation() : n_timesteps(10), n_people(100), people(n_people) // Default constructor
    {
        std::cout << "Created Simulation of " << n_people << " over " << n_timesteps << " Timesteps" << std::endl;
    }

    Simulation(int nsteps, int np) : n_timesteps(nsteps), n_people(np), people(np)
    {}


    void RunSimulation();
};


#endif