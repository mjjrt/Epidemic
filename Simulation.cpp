
#include <iostream>
#include <cmath>


#include "Simulation.h"

#define RISK_DIST 1.5


void Simulation::RunSimulation()
{
    people[1].infected = true;
    for (int i = 0; i < n_timesteps; i++)
    {

        if (NumInfected < int(n_people))
        {
            std::cout << "Step " << i << "\t Infected People: " << NumInfected << '\n';
            for (size_t j = 0; j < people.size(); j++)
            {
                people[j].CheckStatus();
                CheckProximity(people[j], j);
                people[j].move();
            }
            } else {
                std::cout << "The whole population is infected \n";
                break;
            }
    }
    std::cout << "Finished Simulation" << std::endl;
}


void Simulation::CheckProximity(Person &p, size_t index)
{
    for (size_t i = 0; i < people.size(); i++)
    {
        if (i != index)
        {
            double xdist = p.xpos - people[i].xpos;
            double ydist = p.ypos - people[i].ypos;
            double dist = sqrt(xdist*xdist + ydist*ydist);
            
            if (dist <= RISK_DIST && people[i].infected == true)
            {
                if(){
                    p.infected = true;
                    NumInfected++;
                }
//            std::cout << "Person " << index << " is too close to infected Person " << i << " and is now infected\n";
            }
        } // i!=index
    } // Check Prox Loop
    
}
