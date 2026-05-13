#include <iostream>

// Fonction qui calcule la somme des nombres pairs
int sommePairs(int* T, int taille) {
    int somme = 0;

    for (int i = 0; i < taille; i++) {
        // Si le nombre divisé par 2 a un reste de 0, il est pair
        if (T[i] % 2 == 0) {
            somme += T[i]; // On l'ajoute à la somme totale
        }
    }

    return somme;
}

int main() {
    int monTableau[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    int resultat = sommePairs(monTableau, 10);

    std::cout << "La somme des elements pairs est : " << resultat << std::endl;
    // Ici : 2 + 4 + 6 + 8 + 10 = 30

    return 0;
}