#ifndef PLANT_CPP
#define PLANT_CPP

#include <iostream>
#include "Plant.h"

//Plante (std::string name,int hydrat,int health);

std::string Plante :: getNom(){
    return _nom;
}

int Plante :: getHealth(){
    return _health;
}

void Plante::setNom(std::string nom){
    _nom = nom;
}

void Plante :: getEngrais(){
    
    if ( _engrais == false){
        _engrais =true;
    }
    
    else if (_engrais == true){
        std::cout <<"Tu ne peux plus donner d'engrais" << std::endl;
    }
    
}

void Plante :: getCut (){
    
    _growth++;
    
    
    std::cout <<"Tu viens de lui donner une toute nouvelle coupe " << std::endl;

}

void Plante :: getWater(){

    _hydrat ++;
    
    std::cout <<"Mais c'est qu'elle avait soif !" << std::endl;
}

void Plante :: check(){
 std::cout << std::endl << " nom : " << _nom << std::endl << " vie : " << _health << "/100" << std::endl 
<< " Hydratation : " << _hydrat << "/100"<<std::endl;
}

Plante :: Plante (std::string nom,int hydrat,int health) : _nom(nom), _hydrat(hydrat), _health(health){}


#endif