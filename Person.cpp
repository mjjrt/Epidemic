#ifndef __IOSTREAM_H
#include <iostream>
#endif

#ifndef PERSON_CPP_
#define PERSON_CPP_

#include <random>
#include <ctime>

#include "Person.h"

#define SIM_HEIGHT 1000
#define SIM_WIDTH 1000
#define MAX_STEP 10

double GetRandomStep()
{
    srand(time(0));
    return rand() % MAX_STEP;
}

void Person::move()
{
    if (xpos < SIM_WIDTH-MAX_STEP && ypos < SIM_HEIGHT-MAX_STEP)
    {
        xpos += GetRandomStep();
        ypos += GetRandomStep();
    }else{
        xpos -= 1;
        ypos -= 1;
    }
}

void Person::CheckStatus()
{
    if(alive)
    {
        if(infected && days_infected < 14){
            days_infected++;
        }else{
            days_infected = 0;
            immune = true;
        }
        move();
    }

}

#endif