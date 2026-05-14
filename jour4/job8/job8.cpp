#include <stdio.h>

int main() {
    // 1. Déclaration des données sources
    int annee = 2019;
    const char *nom = "La Plateforme";
    float pi = 3.14f;
    const char *groupe = "Étudiants";

    // 2. Création du tableau de pointeurs vers des données constantes (const void *)
    // Cela permet d'accepter à la fois &annee (non-const) et nom (const)
    const void *tableau[] = {&annee, nom, &pi, groupe};

    printf("Affichage du contenu hétérogène :\n");
    printf("----------------------------------\n");

    // Index 0 : On cast en (int*) pour déréférencer
    printf("Index 0 : Valeur = %d (int) \t| Adresse du pointeur = %p\n", *(int*)tableau[0], (void*)&tableau[0]);

    // Index 1 : On cast en (char*) pour l'affichage de chaîne
    printf("Index 1 : Valeur = %s (string) \t| Adresse du pointeur = %p\n", (const char*)tableau[1], (void*)&tableau[1]);

    // Index 2 : On cast en (float*) pour déréférencer
    printf("Index 2 : Valeur = %.2f (float) \t| Adresse du pointeur = %p\n", *(float*)tableau[2], (void*)&tableau[2]);

    // Index 3 : Idem index 1
    printf("Index 3 : Valeur = %s (string) \t| Adresse du pointeur = %p\n", (const char*)tableau[3], (void*)&tableau[3]);

    return 0;
}