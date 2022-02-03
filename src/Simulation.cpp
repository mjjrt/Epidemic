
#include <iostream>
#include <fstream>
#include <string>

#ifndef __CMATH_H
#include <cmath>
#endif



#include "Simulation.h"

#define RISK_DIST 10   // Distance on which infection is possible
#define INF_RISK 80    // Risk of infection on contact, e.g. 30 = 30% Risk
#define INIT_INFECTED 100 // Initially infected persons

void Simulation::RunSimulation()
{
    for (size_t i = 0; i < INIT_INFECTED; i++)
    {
        people[i].infected = true;
    }
    NumInfected = INIT_INFECTED;
    NumImmune = 0;

    for (int i = 0; i < n_timesteps; i++)
    {
        CheckStatus();

        if (NumInfected < int(n_people))
        {
            for (size_t j = 0; j < people.size(); j++)
            {
                people[j].CheckPersonalStatus();
                CheckProximity(people[j], j);
                people[j].move();
            }
            /*std::cout << "Step " << i 
                                    << "\t Infected: " << NumInfected 
                                    << "\t Immune: "<< NumImmune 
                                    << "\t Dead: " << NumDead << '\n';*/
        } else {
            std::cout << "The whole population is infected \n";
            break;
        }

    WriteToCSV(i);

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

            if (dist <= RISK_DIST && people[i].infected == true && p.immune == false)
            {
                if(rand()%10 <= 10)
                {
                    p.infected = true;
                }
//            std::cout << "Person " << index << " is too close to infected Person " << i << " and is now infected\n";
            }
        } // i!=index
    } // Check Prox Loop

}

void Simulation::CheckStatus()
{
    NumInfected = 0;
    NumImmune = 0;
    NumDead = 0;
    for (size_t i = 0; i < people.size(); i++)
    {
        if(people[i].alive){
            if(people[i].infected)
                NumInfected++;
            if(people[i].immune)
                NumImmune++;
        }else{ 
            NumDead++;}
    }
    
}

void Simulation::WriteToCSV(int step)
{
    std::string fname = "data/data.csv.";
    fname.append( std::to_string(step) );
    std::ofstream csvstream;
    csvstream.open(fname);

    if (csvstream.is_open())
    {
        csvstream << "Index," << "x," << "y," << "alive," << "infected," << "immune\n";
        for (size_t i = 0; i < people.size(); i++)
        {
            csvstream   << i << "," 
                        << people[i].xpos << "," 
                        << people[i].ypos << "," 
                        << people[i].alive << "," 
                        << people[i].infected << "," 
                        << people[i].immune << "\n";
        }
    csvstream.close();
    }else{
        std::cerr << "Unable to open data file";
        return;
    }
}