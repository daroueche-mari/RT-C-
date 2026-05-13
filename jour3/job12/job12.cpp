#include <iostream>
#include <ctime>   // Pour time()
#include <cstdlib> // Pour rand() et srand()

int main() {
    // 1. Initialisation du générateur de nombres aléatoires
    std::srand(std::time(0)); 
    
    int nombreMystere = std::rand() % 101; // Génère un nombre entre 0 et 100
    int tentativesRestantes = 7;           // On définit 7 chances
    int choixJoueur = 0;
    bool gagne = false;

    std::cout << "--- BIENVENUE AU NOMBRE MYSTERE ---" << std::endl;
    std::cout << "J'ai choisi un nombre entre 0 et 100." << std::endl;
    std::cout << "Vous avez " << tentativesRestantes << " tentatives pour le trouver !" << std::endl;

    // 2. Boucle de jeu
    while (tentativesRestantes > 0 && !gagne) {
        std::cout << "\nIl vous reste " << tentativesRestantes << " chances.";
        std::cout << "\nVotre proposition : ";
        std::cin >> choixJoueur;

        if (choixJoueur == nombreMystere) {
            gagne = true;
        } 
        else if (choixJoueur < nombreMystere) {
            std::cout << "C'est trop PETIT !";
            tentativesRestantes--;
        } 
        else {
            std::cout << "C'est trop GRAND !";
            tentativesRestantes--;
        }
    }

    // 3. Fin de la partie
    if (gagne) {
        std::cout << "\n BRAVO ! Vous avez trouve le nombre : " << nombreMystere << std::endl;
    } else {
        std::cout << "\n DOMMAGE... Vous avez perdu. Le nombre etait : " << nombreMystere << std::endl;
    }

    return 0;
}