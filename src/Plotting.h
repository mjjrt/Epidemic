#include "../include/matplotlib-cpp/matplotlibcpp.h"

#ifndef __VECTOR_H
#include <vector>
#endif

#ifndef PERSON_H
#define PERSON_H
#include "Person.h"
#endif

namespace plt = matplotlibcpp;

void PlotTimestep(
    std::vector<Person> &p,
    //                    std::vector<double> all_xpos,
    //                    std::vector<double> all_ypos,
    std::vector<double> &xpos_infected, std::vector<double> &ypos_infected,
    std::vector<double> &xpos_immune, std::vector<double> &ypos_immune,
    std::vector<double> &xpos_dead, std::vector<double> &ypos_dead,
    std::vector<double> &xpos_alive, std::vector<double> &ypos_alive) 
{
  xpos_infected.clear();
  ypos_infected.clear();
  xpos_immune.clear();
  ypos_immune.clear();
  xpos_dead.clear();
  ypos_dead.clear();
  xpos_alive.clear();
  ypos_alive.clear();

  for (size_t i = 0; i < p.size(); i++) {
    if (not p[i].alive) {
      xpos_dead.push_back(p[i].xpos);
      ypos_dead.push_back(p[i].ypos);
    } // dead
    else{// if (p[i].alive) {
      if (p[i].infected) {
        xpos_infected.push_back(p[i].xpos);
        ypos_infected.push_back(p[i].ypos);
      } else if (p[i].immune) {
        xpos_immune.push_back(p[i].xpos);
        ypos_immune.push_back(p[i].ypos);
      } else {
        xpos_alive.push_back(p[i].xpos);
        ypos_alive.push_back(p[i].ypos);
      }
    } // alive
  }
  // all_xpos.push_back(p[i].xpos);
  // all_ypos.push_back(p[i].ypos);

  //    plt::clf();
  //    plt::named_plot("Alive", xpos_alive, ypos_alive, "bo");
  //    plt::named_plot("Infected", xpos_infected, ypos_infected, "ro");
  //    plt::named_plot("Immune", xpos_immune, ypos_immune, "go");
  //    plt::named_plot("Dead", xpos_dead, ypos_dead, "ko");
  //
  //    plt::title("Epidemic Simulation");
  //    plt::xlim(-10, 1010);
  //    plt::ylim(-10, 1010);
  //
  //    std::string loc1 = "upper";
  //    std::string loc2 = "right";
  //    std::map<std::string, std::string> loc;
  //    loc.insert(std::make_pair(loc1, loc2));
  //
  //    plt::legend();
  //
  //
  //    plt::pause(0.25);
}