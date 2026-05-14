#include <stdio.h>

int main() {
    // Déclaration et initialisation des variables
    int entier = 17;
    float flottant = 3.14f;
    double reel = 123.345;
    char caractere[] = "La Plateforme"; // Tableau pour stocker la chaîne

    // Affichage des valeurs et des adresses mémoire
    // %p est le spécificateur de format pour les adresses (pointeurs)
    printf("Variable 'entier'    : Valeur = %d,       Adresse = %p\n", entier, (void*)&entier);
    printf("Variable 'flottant'  : Valeur = %.2f,     Adresse = %p\n", flottant, (void*)&flottant);
    printf("Variable 'reel'      : Valeur = %.3f,   Adresse = %p\n", reel, (void*)&reel);
    printf("Variable 'caractere' : Valeur = %s, Adresse = %p\n", caractere, (void*)caractere);

    return 0;
}