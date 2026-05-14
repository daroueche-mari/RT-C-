#include <stdio.h>

// 1. Déclaration de la structure
struct Point {
    int x;
    int y;
};

int main() {
    // 2. Déclaration d'une instance de la structure
    struct Point monPoint;

    // 3. Déclaration d'un pointeur vers cette structure
    struct Point *ptrPoint = &monPoint;

    // 4. Accès et modification des membres via le pointeur
    // On utilise l'opérateur "->"
    ptrPoint->x = 10;
    ptrPoint->y = 25;

    // 5. Affichage des valeurs pour vérifier
    printf("Coordonnées modifiées via pointeur :\n");
    printf("Point.x = %d\n", monPoint.x);
    printf("Point.y = %d\n", monPoint.y);

    return 0;
}