#pragma once

#include <vector>

#ifndef PERSON_H
#define PERSON_H
#include "Person.h"
#endif

#ifndef SIMULATION_H
#define SIMULATION_H

struct Simulation
{
private:
    int n_timesteps;
    size_t n_people;
    std::vector<Person> people;
    int NumInfected = 0;
    int NumImmune = 0;
    int NumDead = 0;

public:
    Simulation() : n_timesteps(10), n_people(1000), people(n_people) // Default constructor
    {
//        std::cout << "Created Simulation of " << n_people << " over " << n_timesteps << " Timesteps" << std::endl;
    }

    Simulation(int nsteps, int np) : n_timesteps(nsteps), n_people(np), people(np)
    {
//        std::cout << "Created Simulation of " << n_people << " over " << n_timesteps << " Timesteps" << std::endl;
    }

    ~Simulation(){};

    void RunSimulation();
    void CheckProximity(Person &p, size_t index);
    void CheckNumbers();
    void WriteToCSV(int step);
};


#endif