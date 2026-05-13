#include <iostream>

// La fonction reçoit l'adresse du tableau et sa taille
void stock(int* T, int taille) {
    for (int i = 0; i < taille; i++) {
        std::cout << T[i] << " "; 
        // On ne touche JAMAIS à 'taille' ici
    }
    std::cout << std::endl;
}

int main() {
    // 1. On crée un vrai tableau de 10 cases
    int monTableau[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // 2. On appelle la fonction en passant le tableau et sa taille
    // Le nom du tableau 'monTableau' devient automatiquement un pointeur (int*)
    stock(monTableau, 10); 
    
    return 0;
}