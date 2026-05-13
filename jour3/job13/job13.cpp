#include <iostream>

void fusionner(int* T1, int taille1, int* T2, int taille2, int* T3) {
    int i = 0; // Index pour T1
    int j = 0; // Index pour T2
    int k = 0; // Index pour T3 (le tableau de destination)

    // On compare les éléments des deux tableaux tant qu'il en reste dans les deux
    while (i < taille1 && j < taille2) {
        if (T1[i] < T2[j]) {
            T3[k] = T1[i];
            i++;
        } else {
            T3[k] = T2[j];
            j++;
        }
        k++;
    }

    // Si le tableau T1 n'est pas vide, on ajoute le reste
    while (i < taille1) {
        T3[k] = T1[i];
        i++;
        k++;
    }

    // Si le tableau T2 n'est pas vide, on ajoute le reste
    while (j < taille2) {
        T3[k] = T2[j];
        j++;
        k++;
    }
}

int main() {
    int T1[] = {1, 3, 5, 7};
    int T2[] = {2, 4, 6, 8, 10};
    
    int taille1 = 4;
    int taille2 = 5;
    int T3[9]; // Taille de T1 + T2

    fusionner(T1, taille1, T2, taille2, T3);

    std::cout << "Tableau fusionne : ";
    for (int i = 0; i < 9; i++) {
        std::cout << T3[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}