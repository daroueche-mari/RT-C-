#include <iostream>

int main() {
    int T[10]; // Déclaration d'un tableau de 10 entiers
    
    // 1. Saisie des données
    std::cout << "Veuillez saisir 10 entiers :" << std::endl;
    for (int i = 0; i < 10; i++) {
        std::cout << "T[" << i << "] = ";
        std::cin >> T[i];
    }

    // 2. Recherche de l'indice du plus grand élément
    int indiceMax = 0; // On commence par supposer que le premier est le plus grand

    for (int i = 1; i < 10; i++) {
        // Si l'élément actuel est plus grand que celui à l'indiceMax
        if (T[i] > T[indiceMax]) {
            indiceMax = i; // On met à jour l'indice du gagnant
        }
    }

    // 3. Affichage du résultat
    std::cout << "\nLe plus grand element est " << T[indiceMax] << std::endl;
    std::cout << "Il se trouve a l'indice : " << indiceMax << std::endl;

    return 0;
}