#define ANIMATION
//#define CSVOUTPUT

#include <fstream>
#include <iostream>
#include <string>

#ifndef __CMATH_H
#include <cmath>
#endif

#include "Simulation.h"

#ifdef ANIMATION
#include "Plotting.h"
#endif

#define RISK_DIST 1.5     // Distance on which infection is possible
#define INF_RISK 20       // Risk of infection on contact, e.g. 30 = 30% Risk
#define INIT_INFECTED 100 // Initially infected persons

void Simulation::RunSimulation() {
#ifdef ANIMATION
  // Initially Infected Persons
  for (size_t i = 0; i < INIT_INFECTED; i++) {
    people[i].infected = true;
  }
  NumInfected = INIT_INFECTED;
  NumImmune = 0;

  // Vectors for Plotting
  std::vector<double> all_xpos, all_ypos;
  std::vector<double> xpos_alive, ypos_alive;
  std::vector<double> xpos_dead, ypos_dead;
  std::vector<double> xpos_infected, ypos_infected;
  std::vector<double> xpos_immune, ypos_immune;

  plt::figure_size(1200, 1200);
  plt::title("Epidemic Simulation");
  plt::xlim(-10, 1100);
  plt::ylim(-10, 1100);

  plt::Plot plotalive("Alive", "bo");
  plt::Plot plotinfected("Infected", "ro");
  plt::Plot plotimmune("Immune", "go");
  plt::Plot plotdead("Dead", "ko");
  // plt::legend("upper right", {0.5, 0, 0.5, 0});
  plt::legend();

  for (int i = 0; i < n_timesteps; i++) {
    CheckNumbers();

    if (NumInfected < int(n_people)) {
      for (size_t j = 0; j < people.size(); j++) {
        people[j].CheckPersonalStatus();
        CheckProximity(people[j], j);
      }
    } else {
      std::cout << "The whole population is infected \n";
      break;
    }

    // WriteToCSV(i);
    PlotTimestep(people, xpos_infected, ypos_infected, xpos_immune, ypos_immune,
                 xpos_dead, ypos_dead, xpos_alive, ypos_alive);
    plotalive.update(xpos_alive, ypos_alive);
    plotinfected.update(xpos_infected, ypos_infected);
    plotimmune.update(xpos_immune, ypos_immune);
    plotdead.update(xpos_dead, ypos_dead);
    plt::pause(0.25);
  }
  plt::show();
  std::cout << "Finished Simulation" << std::endl;
#endif

#ifdef CSVOUTPUT
  // Initially Infected Persons
  for (size_t i = 0; i < INIT_INFECTED; i++) {
    people[i].infected = true;
  }
  NumInfected = INIT_INFECTED;
  NumImmune = 0;

  for (int i = 0; i < n_timesteps; i++) {
    CheckNumbers();

    if (NumInfected < int(n_people)) {
      for (size_t j = 0; j < people.size(); j++) {
        people[j].CheckPersonalStatus();
        CheckProximity(people[j], j);
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
#endif
}

void Simulation::CheckProximity(Person &p, size_t index) {
  for (size_t i = 0; i < people.size(); i++) {
    if (p.alive && i != index) {
      double xdist = p.xpos - people[i].xpos;
      double ydist = p.ypos - people[i].ypos;
      double dist = sqrt(xdist * xdist + ydist * ydist);

      if (people[i].alive && dist <= RISK_DIST && people[i].infected == true &&
          p.immune == false) {
        if (rand() % 100 <= INF_RISK) {
          p.infected = true;
        }
        //            std::cout << "Person " << index << " is too close to
        //            infected Person " << i << " and is now infected\n";
      }
    } // i!=index
    break;
  } // Check Prox Loop
}

void Simulation::CheckNumbers() {
  NumInfected = 0;
  NumImmune = 0;
  NumDead = 0;
  for (size_t i = 0; i < people.size(); i++) {
    if (people[i].alive) {
      if (people[i].infected)
        NumInfected++;
      if (people[i].immune)
        NumImmune++;
    } else {
      NumDead++;
    }
  }
}

void Simulation::WriteToCSV(int step) {
  std::string fname = "data/data.csv.";
  fname.append(std::to_string(step));
  std::ofstream csvstream;
  csvstream.open(fname);

  if (csvstream.is_open()) {
    csvstream << "Index,"
              << "x,"
              << "y,"
              << "alive,"
              << "infected,"
              << "immune\n";
    for (size_t i = 0; i < people.size(); i++) {
      csvstream << i << "," << people[i].xpos << "," << people[i].ypos << ","
                << people[i].alive << "," << people[i].infected << ","
                << people[i].immune << "\n";
    }
    csvstream.close();
  } else {
    std::cerr << "Unable to open data file";
    return;
  }
}