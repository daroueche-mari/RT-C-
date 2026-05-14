#ifndef JOUEUR_HPP
#define JOUEUR_HPP

#include <iostream>

class Joueur {
private:
    int x;
    int y;
public:
    // Constructeur pour initialiser les valeurs
    Joueur(int moveX = 0, int moveY = 0) {
        x = moveX;
        y = moveY;
    }

    // Méthode pour afficher la position actuelle
    void afficherposition() const {
        std::cout << "X : " << x << " Y : " << y <<std::endl;
    }

    // Méthode pour déplacer le joueur
    void deplacer(int newX, int newY) {
        x += newX;
        y += newY;
    }

};

#endif