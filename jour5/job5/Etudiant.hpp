#ifndef Etudiant_hpp
#define Etudiant_hpp

#include <iostream>

class Etudiant {

private :

    std::string nom;
    std::string prenom;
    int age;
    int matricule;

public :

    Etudiant(std::string nom, std::string prenom, int age, int matricule) {
        this->nom = nom;
        this->prenom = prenom;
        this->age = age;
        this->matricule = matricule;
    }
    // Setters
    void setname(std::string myname) {
        this->nom = myname;
    }
    void setfirstname(std::string myfirstname) {
        this->prenom = myfirstname;
    }
    void setage(int myage) {
        this->age = myage;
    }
    void setmatricule(int mymatricule) {
        this->matricule = mymatricule;
    }

    //Getters
    std::string getname() const{
        return this->nom;
    }
    std::string getfirstname() const{
        return this->prenom;
    }
    int getage() const{
        return this->age;
    }
    int getmatricule() const{
        return this->matricule;
    }
};

#endif