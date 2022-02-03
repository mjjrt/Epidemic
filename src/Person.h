#pragma once

#ifndef _PERSON_H
#define _PERSON_H


struct Person
{
    // Status
    bool alive; // 0 if dead
    bool infected; // 1 if true
    bool immune; // 1 if true;
    int days_infected = 0;

    Person() : alive(1), infected(0), immune(0), days_infected(0), xpos(rand()%1000), ypos(rand()%1000){};
    //Person(){};

    // Position
    double xpos = rand()%1000;
    double ypos = rand()%1000;

    void CheckPersonalStatus();
    void move();
};


#endif