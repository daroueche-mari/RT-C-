#include <iostream>
#include <vector>

int main() {
    // 1. Création du tableau (on utilise std::vector pour la modernité)
    std::vector<int> tableau = {1, 2, 3, 4, 5};

    std::cout << "Valeurs du tableau (via références) :" << std::endl;

    // 2. Boucle de parcours utilisant une référence
    // 'val' devient un alias direct de l'élément à chaque itération
    for (int &val : tableau) {
        std::cout << val << " ";
    }
    
    std::cout << std::endl;

    // 3. Exemple : On peut aussi modifier les valeurs directement
    for (int &val : tableau) {
        val *= 2; // On double chaque valeur directement dans le tableau
    }

    std::cout << "Valeurs après modification : " << std::endl;
    for (const int &val : tableau) { // 'const' car on veut juste lire ici
        std::cout << val << " ";
    }

    return 0;
}