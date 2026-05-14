#include "Joueur.hpp"
#include <iostream>

int main() {
    // Instanciation de la classe
    Joueur Joueurdeux(0, 0);
    Joueur monJoueur(10, 10);
    Joueur Joueurtrois(10, 5, "Bot");

    std::cout << "--- Début de la simulation ---" << std::endl;
    monJoueur.afficherposition();
    Joueurdeux.afficherposition();
    Joueurtrois.afficherposition();

    // Simulation de mouvements
    monJoueur.deplacer(5, -2);
    monJoueur.afficherposition();
    Joueurdeux.deplacer(0, 0);
    Joueurdeux.afficherposition();
    Joueurtrois.deplacer(10, 3);
    Joueurtrois.afficherposition();


    std::cout << "--- Fin de la simulation ---" << std::endl;

    return 0;
}