#ifndef __IOSTREAM_H
#include <iostream>
#endif

#ifndef PERSON_CPP_
#define PERSON_CPP_

#include <chrono>
#include <random>

#include "Person.h"

#define SIM_HEIGHT 1000
#define SIM_WIDTH 1000
#define MAX_STEP 20

#define LETALITY 10
#define RISK_SPONT_INF 5

double GetRandomStep() {
  unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
  std::mt19937 randgen(seed);
  std::uniform_int_distribution<int> dis(-MAX_STEP, MAX_STEP);
  return dis(randgen);
}

double RandomPosition() {
  unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
  std::mt19937 randgenPos(seed);
  std::uniform_int_distribution<int> dis(0 + MAX_STEP * 2,
                                         SIM_HEIGHT - MAX_STEP * 2);
  return dis(randgenPos);
}

void Person::move() {
  // if(xbounds && ybounds)
  if ((xpos < SIM_WIDTH - MAX_STEP && xpos > 0 + MAX_STEP) &&
      (ypos < SIM_HEIGHT - MAX_STEP && ypos > 0 + MAX_STEP)) {
    xpos += GetRandomStep();
    ypos += GetRandomStep();
  } else if (xpos >= SIM_WIDTH - MAX_STEP || xpos <= 0 + MAX_STEP) {
    // Move to random Point
    xpos = RandomPosition();
    ypos = RandomPosition();
  } else if (ypos >= SIM_WIDTH - MAX_STEP || ypos <= 0 + MAX_STEP) {
    xpos = RandomPosition();
    ypos = RandomPosition();
  }
}

void Person::CheckPersonalStatus() {
  if (not alive)
    return;

  if (infected) {
    bool DEATH = (rand() % 100 < LETALITY); // Risk of death by infection
    if (DEATH)
      alive = false;

    if (days_infected <= 14) {
      days_infected++;
      move();
    } else {
      days_infected = 0;
      infected = false;
      immune = true;
      move();
    }
  } else if (immune) {
    move();
  } else {
    bool SPONT_INF =
        (rand() % 100 <
         RISK_SPONT_INF); // Risk of spontaneous infection (w/o contact)
    if (SPONT_INF)
      infected = true;
    move();
  };

  return; // Unreachable, just for a default case
}

#endif
