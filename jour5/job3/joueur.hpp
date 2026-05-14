#ifndef JOUEUR_HPP
#define JOUEUR_HPP

#include <iostream>
#include <string> // Nécessaire pour utiliser les noms (std::string)

class Joueur {
private:
    int x;
    int y;
    std::string nom; // Nouvel attribut pour le nom

public:
    // 1. Constructeur par défaut (x=0, y=0, nom vide)
    Joueur() {
        x = 0;
        y = 0;
    }

    // 2. Constructeur avec x et y uniquement
    Joueur(int moveX, int moveY) {
        x = moveX;
        y = moveY;
    }

    // 3. Constructeur avec x, y et le nom
    Joueur(int moveX, int moveY, std::string nouveauNom) {
        x = moveX;
        y = moveY;
        nom = nouveauNom;
    }

    // Méthode pour afficher (mise à jour pour voir le nom)
    void afficherposition() const {
        std::cout << "Joueur : " << nom << " | Position -> X : " << x << " Y : " << y << std::endl;
    }

    void deplacer(int newX, int newY) {
        x += newX;
        y += newY;
    }
};

#endif