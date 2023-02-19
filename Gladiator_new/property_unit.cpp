#include "property_unit.h"




void change_variable(int *_var){
    printf("%p \n", _var);
    *_var -= 20;
    printf("%d \n", *_var);
}

void get_health(int *_health){
    *_health -= 20;
}

void get_exp(int *_exp){
    *_exp += 20;
}

void get_exp_weapon(int *_exp_weapon){
    *_exp_weapon += 30;
}
