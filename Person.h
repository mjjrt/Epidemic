#pragma once

#ifndef _PERSON_H_
#define _PERSON_H_


struct Person
{
    // Status
    bool alive; // 0 if dead
    bool infected; // 1 if true
    bool immune; // 1 if true;
    int days_infected;

    Person() : alive(1), infected(0), immune(0), days_infected(0), xpos(rand()%1000), ypos(rand()%1000){};
    // Position
    double xpos;
    double ypos;

    void CheckStatus();
    void move();
};


#endif