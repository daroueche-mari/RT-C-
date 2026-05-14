#include <stdio.h>
#include <stdlib.h> // Nécessaire pour malloc et free

int main() {
    int taille;
    int *tableau;

    // 1. Demander la taille à l'utilisateur
    printf("Entrez le nombre d'entiers souhaité : ");
    if (scanf("%d", &taille) != 1 || taille <= 0) {
        printf("Taille invalide.\n");
        return 1;
    }

    // 2. Allocation dynamique de la mémoire
    // On réserve (taille * taille d'un int) octets
    tableau = (int *)malloc(taille * sizeof(int));

    // Vérification si l'allocation a réussi
    if (tableau == NULL) {
        printf("Erreur : Mémoire insuffisante.\n");
        return 1;
    }

    // 3. Remplissage du tableau
    printf("Veuillez entrer les %d entiers :\n", taille);
    for (int i = 0; i < taille; i++) {
        printf("Élément %d : ", i + 1);
        scanf("%d", &tableau[i]); // On peut aussi écrire (tableau + i)
    }

    // 4. Affichage du contenu
    printf("\nContenu du tableau dynamique :\n");
    for (int i = 0; i < taille; i++) {
        printf("[%d] ", tableau[i]);
    }
    printf("\n");

    // 5. Libération de la mémoire (Crucial !)
    free(tableau);
    tableau = NULL; // Bonne pratique : éviter les pointeurs "pendus"

    return 0;
}