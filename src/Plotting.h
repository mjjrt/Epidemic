#include "../include/matplotlib-cpp/matplotlibcpp.h"

#ifndef __VECTOR_H
#include <vector>
#endif

#ifndef PERSON_H
#define PERSON_H
#include "Person.h"
#endif

namespace plt = matplotlibcpp;

void PlotTimestep(std::vector<Person> p)
{
    std::vector<double> all_xpos, all_ypos;
    std::vector<double> xpos_alive, ypos_alive;
    std::vector<double> xpos_dead, ypos_dead;
    std::vector<double> xpos_infected, ypos_infected;
    std::vector<double> xpos_immune, ypos_immune;

    for (size_t i = 0; i < p.size(); i++)
    {
        if(p[i].infected)
        {
            xpos_infected.push_back(p[i].xpos);
            ypos_infected.push_back(p[i].ypos);
        }else if(p[i].immune){
            xpos_immune.push_back(p[i].xpos);
            ypos_immune.push_back(p[i].ypos);
        }else if(p[i].alive){
            xpos_alive.push_back(p[i].xpos);
            ypos_alive.push_back(p[i].ypos);
        }else{
            xpos_dead.push_back(p[i].xpos);
            ypos_dead.push_back(p[i].ypos);
        }
    }
        //all_xpos.push_back(p[i].xpos);
        //all_ypos.push_back(p[i].ypos);

    //plt::figure_size(1200, 1200);

    plt::clf();
    plt::xlim(-10, 1010);
    plt::ylim(-10, 1010);
    plt::named_plot("Alive", xpos_alive, ypos_alive, "bo");
    plt::named_plot("Infected", xpos_infected, ypos_infected, "ro");
    plt::named_plot("Immune", xpos_immune, ypos_immune, "go");
    plt::named_plot("Dead", xpos_dead, ypos_dead, "ko");

    //plt::plot(xpos_dead, ypos_dead, "ko");
    //plt::title("");
    // Enable legend.
    //plt::legend();

    plt::pause(0.25);

}