#ifndef __IOSTREAM_H
#include <iostream>
#endif

#ifndef PERSON_CPP_
#define PERSON_CPP_

#include <random>
#include <chrono>

#include "Person.h"

#define SIM_HEIGHT 1000
#define SIM_WIDTH 1000
#define MAX_STEP 20

double GetRandomStep()
{
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::mt19937 randgen(seed);
    std::uniform_int_distribution<int> dis(-MAX_STEP, MAX_STEP);
    return dis(randgen);
}

void Person::move()
{
    // if(xbounds && ybounds)
    if ((xpos < SIM_WIDTH-MAX_STEP && xpos > 0+MAX_STEP) && (ypos < SIM_HEIGHT-MAX_STEP && ypos > 0+MAX_STEP)) 
    {
        xpos += GetRandomStep();
        ypos += GetRandomStep();
    }
    else if(xpos >= SIM_WIDTH-MAX_STEP || xpos <= 0+MAX_STEP)
    {
            // Move Backwards
            xpos = GetRandomStep();
    }
    else if(ypos >= SIM_WIDTH-MAX_STEP || ypos <= 0+MAX_STEP)
    {
        ypos = GetRandomStep();
    }
}


void Person::CheckPersonalStatus()
{
    if(alive)
    {

            if(infected && rand()%100 < 10)
            {
                alive = false;
                move();
            }
            if(infected && days_infected <= 14)
            {
                days_infected++;
                move();
            }
            else if(infected && days_infected > 14)
            {
                days_infected = 0;
                infected = false;
                immune = true;
                move();
            }

    }else return;
}


#endif
