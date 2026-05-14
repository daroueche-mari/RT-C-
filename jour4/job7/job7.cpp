#include <stdio.h>

int main() {
    // 1. Initialisation d'un tableau statique
    int tableau[] = {10, 20, 30, 40, 50};
    int taille = sizeof(tableau) / sizeof(tableau[0]);

    printf("Affichage des éléments du tableau :\n");
    printf("-----------------------------------\n");

    for (int i = 0; i < taille; i++) {
        // On affiche l'indice, la valeur et l'adresse mémoire
        printf("Index [%d] : Valeur = %d | Adresse = %p\n", i, tableau[i], (void*)&tableau[i]);
    }

    return 0;
}