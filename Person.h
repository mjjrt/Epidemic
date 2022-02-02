#pragma once

#ifndef _PERSON_H_
#define _PERSON_H_

struct Person
{
    // Status
    bool alive; // 0 if dead
    bool infected; // 1 if true
    bool immune; // 1 if true;

    // Position
    double x;
    double y;
};


#endif