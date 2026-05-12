#include <iostream>
#include <iomanip> // Indispensable pour l'alignement

int main() {
    // 1. Affichage de l'en-tête (la première ligne)
    std::cout << "   I";
    for (int j = 1; j <= 10; ++j) {
        std::cout << std::setw(4) << j;
    }
    std::cout << "\n--------------------------------------------\n";

    // 2. Corps du tableau
    for (int i = 1; i <= 10; ++i) {
        // Affichage du numéro de ligne au début
        std::cout << std::setw(2) << i << " I"; 
        
        for (int j = 1; j <= 10; ++j) {
            // Affichage de la multiplication avec un espacement fixe
            std::cout << std::setw(4) << i * j;
        }
        std::cout << std::endl; // Saut de ligne après chaque rangée
    }

    return 0;
}