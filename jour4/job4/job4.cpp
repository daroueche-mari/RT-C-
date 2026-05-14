#include <stdio.h>

int main() {
    // 1. Création de trois variables entières
    int a = 10;
    int b = 20;
    int c = 30;

    // 2. Création de trois pointeurs vers ces variables
    int *ptr1 = &a;
    int *ptr2 = &b;
    int *ptr3 = &c;

    // 3. Accès aux valeurs via le déréférencement (*)
    printf("Valeurs initiales :\n");
    printf("a = %d, b = %d, c = %d\n", *ptr1, *ptr2, *ptr3);

    // 4. Modification des valeurs pointées
    *ptr1 = 100;
    *ptr2 = 200;
    *ptr3 = 300;

    // 5. Affichage des nouvelles valeurs des variables originales
    printf("\nValeurs après modification via pointeurs :\n");
    printf("a = %d, b = %d, c = %d\n", a, b, c);

    return 0;
}