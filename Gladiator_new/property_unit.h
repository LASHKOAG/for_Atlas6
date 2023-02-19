#ifndef PROPERTY_UNIT_H
#define PROPERTY_UNIT_H
#include <stdio.h>

struct Unit_game{
    int health;
    int experience;
    int experience_weapon;
    int like_counter;
    int smart;
    int mood;
    int armor_protection;
};

void change_variable(int *_var);

void get_health(int *_health);

void get_exp(int *_exp);

void get_exp_weapon(int *_exp_weapon); //Опыт в обращении с оружеем

#endif // PROPERTY_UNIT_H
