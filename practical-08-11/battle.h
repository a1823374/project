#include <iostream>

#ifndef BATTLE_H
#define BATTLE_H

using namespace std;

class Battle
{
public:

    string your_attack;

    bool battle_enemy_1(int p_health, int enemy_1_health, int p_speed, int p_defence, int enemy_speed_1);
    bool battle_enemy_2(int p_health, int enemy_2_health, int p_speed, int p_defence, int enemy_speed_2);

};

#endif