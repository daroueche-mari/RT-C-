#include <iostream>

int main() {
    // 1. Création de la variable x
    int x = 12;

    // 2. Création d'une référence vers x
    // On utilise le symbole '&' lors de la déclaration
    int &refX = x;

    std::cout << "Valeur initiale de x : " << x << std::endl;

    // 3. Modification de x via la référence
    refX = 42; 

    std::cout << "Nouvelle valeur de x après modification par refX : " << x << std::endl;

    return 0;
}