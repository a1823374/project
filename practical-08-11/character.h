#include <iostream>

#ifndef CHARACTER_H
#define CHARACTER_H

class Character
{
public:

    int health;
    int speed;
    int defence;
    int level;
    int position_x;
    int position_y;

    int get_health();
    bool is_dead(int health);

    int get_speed();

    int get_defence();

};


#endif

