#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure représentant un étudiant et sa note
typedef struct {
    char nom[50];
    char prenom[50];
    float note;
} Etudiant;

// Prototypes des fonctions
void afficherMenu();
Etudiant* ajouterNote(Etudiant *liste, int *taille);
void afficherListe(Etudiant *liste, int taille);
Etudiant* supprimerNote(Etudiant *liste, int *taille);
void afficherMoyenne(Etudiant *liste, int taille);

int main() {
    Etudiant *liste = NULL;
    int taille = 0;
    int choix;

    do {
        afficherMenu();
        printf("Votre choix : ");
        scanf("%d", &choix);
        getchar(); // Nettoyer le tampon pour le prochain fgets

        switch (choix) {
            case 1:
                liste = ajouterNote(liste, &taille);
                break;
            case 2:
                afficherListe(liste, taille);
                break;
            case 3:
                liste = supprimerNote(liste, &taille);
                break;
            case 4:
                afficherMoyenne(liste, taille);
                break;
            case 5:
                printf("Fermeture du programme...\n");
                break;
            default:
                printf("Choix invalide !\n");
        }
    } while (choix != 5);

    free(liste); // Libération finale de la mémoire
    return 0;
}

void afficherMenu() {
    printf("\n--- Gestion des notes La Plateforme ---\n");
    printf("1. Ajouter une note\n");
    printf("2. Afficher la liste des notes\n");
    printf("3. Supprimer une note\n");
    printf("4. Afficher la moyenne\n");
    printf("5. Quitter\n");
}

Etudiant* ajouterNote(Etudiant *liste, int *taille) {
    (*taille)++;
    liste = (Etudiant*)realloc(liste, (*taille) * sizeof(Etudiant));
    
    if (liste == NULL) exit(1);

    printf("Nom de l'étudiant : ");
    fgets(liste[*taille - 1].nom, 50, stdin);
    liste[*taille - 1].nom[strcspn(liste[*taille - 1].nom, "\n")] = 0;

    printf("Prénom de l'étudiant : ");
    fgets(liste[*taille - 1].prenom, 50, stdin);
    liste[*taille - 1].prenom[strcspn(liste[*taille - 1].prenom, "\n")] = 0;

    printf("Note : ");
    scanf("%f", &liste[*taille - 1].note);
    
    printf("Note ajoutée avec succès !\n");
    return liste;
}

void afficherListe(Etudiant *liste, int taille) {
    if (taille == 0) {
        printf("La liste est vide.\n");
        return;
    }
    for (int i = 0; i < taille; i++) {
        printf("%d. [%s %s] : %.2f/20\n", i + 1, liste[i].prenom, liste[i].nom, liste[i].note);
    }
}

Etudiant* supprimerNote(Etudiant *liste, int *taille) {
    if (*taille == 0) {
        printf("Rien à supprimer.\n");
        return liste;
    }

    int index;
    afficherListe(liste, *taille);
    printf("Numéro de la note à supprimer : ");
    scanf("%d", &index);

    if (index < 1 || index > *taille) {
        printf("Index invalide.\n");
        return liste;
    }

    // Décalage des éléments pour combler le vide
    for (int i = index - 1; i < *taille - 1; i++) {
        liste[i] = liste[i + 1];
    }

    (*taille)--;
    return (Etudiant*)realloc(liste, (*taille) * sizeof(Etudiant));
}

void afficherMoyenne(Etudiant *liste, int taille) {
    if (taille == 0) {
        printf("Pas de notes pour calculer une moyenne.\n");
        return;
    }
    float somme = 0;
    for (int i = 0; i < taille; i++) somme += liste[i].note;
    printf("Moyenne de la classe : %.2f/20\n", somme / taille);
}