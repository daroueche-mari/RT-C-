#include "Joueur.hpp"
#include <iostream>

int main() {
    // Instanciation de la classe
    Joueur monJoueur(10, 10);

    std::cout << "--- Début de la simulation ---" << std::endl;
    monJoueur.afficherposition();

    // Simulation de mouvements
    monJoueur.deplacer(5, -2);
    monJoueur.afficherposition();

    monJoueur.deplacer(-3, 10);
    monJoueur.afficherposition();

    monJoueur.deplacer(0, -5);
    monJoueur.afficherposition();

    std::cout << "--- Fin de la simulation ---" << std::endl;

    return 0;
}