#ifndef Animal_hpp
#define Animal_hpp

#include <iostream>

class Animal {
private:
    // Propriété statique privée (partagée par tous les enfants)
    static int totalAnimaux;

public:
    // Constructeur : appelé automatiquement quand un Chat ou Chien est créé
    Animal() {
        totalAnimaux++;
    }

    // Destructeur virtuel
    virtual ~Animal() {
        totalAnimaux--; // On décompte si un animal est détruit
    }

    // Méthode statique pour récupérer le total
    static int getTotal() {
        return totalAnimaux;
    }

    virtual void crier() const = 0;
    virtual void manger() const = 0;
};


int Animal::totalAnimaux = 0;

class Chien : public Animal {
public:
    void crier() const override {
        std::cout << "Woof!" << std::endl;
    }
    void manger() const override {
        std::cout << "Le chien a une alimentation variée." << std::endl;
    }
};

class Chat : public Animal {
public:
    void crier() const override {
        std::cout << "Miaou!" << std::endl;
    }
    void manger() const override {
        std::cout << "Le chat mange du poisson." << std::endl;
    }
};

#endif