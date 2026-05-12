#include <iostream>
#include <cmath>

int racinecarre(int a) {
    if (a < 0) {
     std::cout << "Svp positif" <<std::endl;
     a = false;   
    } else if (a == 0) {
        std::cout << "Sortie du programme" <<std::endl;
        exit(0);
    }
    return sqrt(a);
}

int main()
{
    std::cout << "Entrez un nombre positif:" << std::endl;
    int nombre;
    std::cin >> nombre;
    std::cout << racinecarre(nombre) <<std::endl;
}