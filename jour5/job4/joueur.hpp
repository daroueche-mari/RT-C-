#ifndef JOUEUR_HPP
#define JOUEUR_HPP

#include <iostream>
#include <string>

class Joueur {
private:
    int x;
    int y;
    std::string nom;

public:
    // 1. Constructeur par défaut
    Joueur() {
        this->x = 0;
        this->y = 0;
        this->nom = "Inconnu";
    }

    // 2. Constructeur avec x et y
    Joueur(int x, int y) {
        // Ici 'this->x' est l'attribut de la classe
        // 'x' est le paramètre de la fonction
        this->x = x; 
        this->y = y;
    }

    // 3. Constructeur complet
    Joueur(int x, int y, std::string nom) {
        this->x = x;
        this->y = y;
        this->nom = nom;
    }

    void afficherposition() const {
        // Très utile ici pour la clarté
        std::cout << "Joueur : " << this->nom 
                  << " | Position -> X : " << this->x 
                  << " Y : " << this->y << std::endl;
    }

    void deplacer(int x, int y) {
        this->x += x;
        this->y += y;
    }
    void nouveaunom(std::string nom) {
        this->nom = nom;
        std::cout << this->nom <<std::endl;
    }
};

#endif