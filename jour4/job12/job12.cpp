#include <stdio.h>
#include <string.h>

// 1. Définition de la structure Staff
typedef struct {
    char nom[50];
    char prenom[50];
} Staff;

// 2. Définition de la structure Etudiant
typedef struct {
    char nom[50];
    char prenom[50];
} Etudiant;

int main() {
    // --- PARTIE STAFF ---
    // Initialisation statique des membres du staff
    Staff membre1 = {"Cordial", "Alicia"};
    Staff membre2 = {"Malardier", "Pierre"};

    printf("--- Prénoms du Staff ---\n");
    printf("Membre 1 : %s\n", membre1.prenom);
    printf("Membre 2 : %s\n", membre2.prenom);

    // --- PARTIE ÉTUDIANT ---
    int nbEtudiants;
    printf("\nCombien d'étudiants souhaitez-vous saisir ? ");
    scanf("%d", &nbEtudiants);
    getchar(); // Nettoyer le tampon mémoire

    // Déclaration d'un tableau de structures Etudiant
    Etudiant listeEtudiants[nbEtudiants];

    for (int i = 0; i < nbEtudiants; i++) {
        printf("\nSaisie pour l'étudiant n°%d :\n", i + 1);
        
        printf("Nom : ");
        fgets(listeEtudiants[i].nom, 50, stdin);
        listeEtudiants[i].nom[strcspn(listeEtudiants[i].nom, "\n")] = 0; // Retire le \n

        printf("Prénom : ");
        fgets(listeEtudiants[i].prenom, 50, stdin);
        listeEtudiants[i].prenom[strcspn(listeEtudiants[i].prenom, "\n")] = 0;
    }

    // Affichage des prénoms des étudiants
    printf("\n--- Prénoms des Étudiants ---\n");
    for (int i = 0; i < nbEtudiants; i++) {
        printf("Étudiant %d : %s\n", i + 1, listeEtudiants[i].prenom);
    }

    return 0;
}