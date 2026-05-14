#ifndef Personne_hpp
#define Personne_hpp

#include <iostream>

class Personne {

private :

    std::string nom;
    int vie;
    float defense;

public :

    Personne(std::string nom, int vie, float defense) {
        this->nom = nom;
        this->vie = vie;
        this->defense = defense;
    }
    // Setters
    void setname(std::string myname) {
        this->nom = myname;
    }
    void modifyname(std::string newname) {
        this->setname(newname);
    }
    void sethealth(int myhealth) {
        this->vie = myhealth;
    }
    void modifyhealth(int newhealth) {
        this->sethealth(newhealth);
    }

    void setdefense(float mydefense) {
        this->defense = mydefense;
    }
    void modifydefense(float newdefense) {
        this->setdefense(newdefense);
    }

    //Getters
    std::string getname() const{
        return this->nom;
    }
    
    int gethealth() const{
        return this->vie;
    }
    float getdefense() const{
        return this->defense;
    }
};

#endif