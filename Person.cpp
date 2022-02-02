#include <iostream>

#ifndef PERSON_CPP_
#define PERSON_CPP_

#include <random>
#include "Person.h"

#define SIM_HEIGHT 1000
#define SIM_WIDTH 1000
#define MAX_STEP 10

double GetRandomStep()
{
    std::random_device rseed;
    std::mt19937 rng(rseed());
    std::uniform_int_distribution<int> dist(-MAX_STEP,MAX_STEP);
    return dist(rng);
}

void Person::move()
{
    if (xpos < SIM_WIDTH-MAX_STEP && ypos < SIM_HEIGHT-MAX_STEP)
    {
        xpos += GetRandomStep();
        ypos += GetRandomStep();
    }
}

#endif