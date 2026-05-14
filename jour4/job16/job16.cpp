#include <stdio.h>

int trouverMaximum(int *tab, int taille) {
    // On initialise le maximum avec le premier élément du tableau
    int max = *tab; 

    for (int i = 1; i < taille; i++) {
        // Si l'élément actuel est supérieur au max connu
        if (*(tab + i) > max) {
            max = *(tab + i); // Mise à jour du maximum
        }
    }
    
    return max;
}

int main() {
    int notes[] = {12, 18, 5, 20, 14, 9};
    int taille = sizeof(notes) / sizeof(notes[0]);

    int resultat = trouverMaximum(notes, taille);

    printf("Le tableau contient : ");
    for(int i = 0; i < taille; i++) printf("%d ", notes[i]);
    
    printf("\nLa valeur maximale est : %d\n", resultat);

    return 0;
}