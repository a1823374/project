#include <iostream>
#include "character.h"
#include "player.h"
using namespace std;

int main()
{
    {
        Player Greg;
        Greg.set_health(10);
        Greg.set_speed(10);
        Greg.set_defence(10);
        Greg.set_level(0);


        if(Greg.get_health() != 10)
        {
            cout<< "getter and setter health 1 err" << endl;
        }

        if(Greg.get_speed() < 0 && Greg.get_speed() >10)
        {
            cout<< "speed err 1" << endl;
        }

        if(Greg.get_defence() != 10)
        {
            cout<< "defence err 1" << endl;
        }

        if(Greg.get_level() != 1)
        {
            cout<< "Level error 1" << endl;
        }


        if(Greg.is_dead(Greg.health) == true)
        {
            cout << "is_dead err 1" << endl;
        }
    }

    {
        Character Greg;
        Greg.set_health(-1);
        Greg.set_speed(-1);
        Greg.set_defence(-1);
        Greg.set_level(3);

        if(Greg.get_health() != 0)
        {
            cout<< "Getter and setter health 2 err" << endl;
        }

        if(Greg.get_speed() < 0 && Greg.get_speed() > 10)
        {
            cout<< "speed err 2" << endl;
        } 

        if(Greg.get_defence() != 0)
        {
            cout<< "defence err 2" << endl;
        }

        if(Greg.get_level() != 3)
        {
            cout<< "Level error 2" << endl;
        }

        if(Greg.is_dead(Greg.health) != true)
        {
            cout << "is_dead function err 2" << endl;
        }
    }


}