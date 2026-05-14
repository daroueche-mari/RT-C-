#include <stdio.h>

void intervertir(int *a, int *b) {
    int temporaire;
    
    temporaire = *a; // Sauvegarde la valeur pointée par a
    *a = *b;         // Copie la valeur pointée par b à l'adresse de a
    *b = temporaire; // Copie la valeur sauvegardée à l'adresse de b
}

int main() {
    int x = 10;
    int y = 20;

    printf("Avant : x = %d, y = %d\n", x, y);

    // On passe les adresses des variables avec l'opérateur &
    intervertir(&x, &y);

    printf("Après : x = %d, y = %d\n", x, y);

    return 0;
}