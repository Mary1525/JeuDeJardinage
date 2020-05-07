#ifndef PLANT_H
#define PLANT_H

#include <string>

class Plante{
    
    private :
    
    std::string _nom;
    int _hydrat;
    int _growth;
    int _health;
    int _noyade;
    
    bool _engrais;

    public :
    
    std::string getNom();
    
    int getHealth();
    
    void setNom(std::string nom);
    void check();
    void getEngrais();
    void getGrowth();
    void getCut();
    void getWater();

    Plante (std::string nom,int hydrat,int health);
    
    
};


#endif