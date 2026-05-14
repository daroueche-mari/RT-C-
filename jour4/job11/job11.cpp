#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // 1. Création et affichage du tableau statique "fruit"
    // On utilise un tableau de pointeurs sur des chaînes constantes
    const char *fruit[] = {"Pomme", "Banane", "Fraise", "Mangue", "Kiwi"};
    int nbFruitsFixes = 5;

    printf("Liste des fruits disponibles :\n");
    for (int i = 0; i < nbFruitsFixes; i++) {
        printf("- %s\n", fruit[i]);
    }

    // 2. Demander la taille du tableau "favoris"
    int nbFavoris;
    printf("\nCombien de fruits préférez-vous ? ");
    if (scanf("%d", &nbFavoris) != 1 || nbFavoris <= 0) {
        printf("Nombre invalide.\n");
        return 1;
    }
    getchar(); // Nettoyer le buffer après le scanf

    // 3. Allocation dynamique pour le tableau "favoris"
    // On alloue de l'espace pour stocker 'nbFavoris' pointeurs vers des chaînes
    char **favoris = (char **)malloc(nbFavoris * sizeof(char *));
    if (favoris == NULL) {
        printf("Erreur d'allocation mémoire.\n");
        return 1;
    }

    // 4. Remplissage du tableau "favoris"
    printf("Entrez vos %d fruits favoris :\n", nbFavoris);
    for (int i = 0; i < nbFavoris; i++) {
        char buffer[100];
        printf("Fruit n°%d : ", i + 1);
        fgets(buffer, sizeof(buffer), stdin);
        
        // Supprimer le saut de ligne (\n) à la fin
        buffer[strcspn(buffer, "\n")] = '\0';

        // Allouer dynamiquement l'espace pour le mot saisi et le copier
        favoris[i] = (char *)malloc((strlen(buffer) + 1) * sizeof(char));
        if (favoris[i] != NULL) {
            strcpy(favoris[i], buffer);
        }
    }

    // 5. Affichage du tableau "favoris"
    printf("\nVos fruits favoris sont :\n");
    for (int i = 0; i < nbFavoris; i++) {
        printf("- %s\n", favoris[i]);
    }

    // 6. Libération de la mémoire
    for (int i = 0; i < nbFavoris; i++) {
        free(favoris[i]); // Libère chaque chaîne individuelle
    }
    free(favoris); // Libère le tableau de pointeurs
    favoris = NULL;

    printf("\nMémoire libérée. Fin du programme.\n");

    return 0;
}