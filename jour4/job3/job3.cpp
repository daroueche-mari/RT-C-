#include <stdio.h>
#include <string.h>

void inverserChaine(char *str) {
    if (str == NULL) return;

    char *debut = str;           // Pointeur sur le premier caractère
    char *fin = str + strlen(str) - 1; // Pointeur sur le dernier caractère
    char temp;

    while (debut < fin) {
        // Échange des caractères via les pointeurs
        temp = *debut;
        *debut = *fin;
        *fin = temp;

        // On déplace les pointeurs vers le centre
        debut++;
        fin--;
    }
}

int main() {
    char chaine[100];

    printf("Entrez une chaîne : ");
    fgets(chaine, sizeof(chaine), stdin);

    // Supprimer le caractère de nouvelle ligne (\n) ajouté par fgets
    chaine[strcspn(chaine, "\n")] = '\0';

    inverserChaine(chaine);

    printf("Chaîne inversée : %s\n", chaine);

    return 0;
}