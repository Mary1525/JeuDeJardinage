/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

#include "Plant.h"

//Plante (std::string name,int hydrat,int health);
using namespace std;

int main()
{
    Plante * Proutstiflore = new Plante ("Proutstiflore", 50,50);
    Proutstiflore->check();
    
    return 0;
}
