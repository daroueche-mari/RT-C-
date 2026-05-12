#include <iostream>
#include <cstdlib>

void checking(int n) {
    if (n < 0 || n > 20) {
        std::cout << "Nombre invalide" << std::endl;
        exit(0);
    } else if (n > 10) {
        std::cout << "valide" << std::endl;
    } else {
        std::cout << "non valide" << std::endl;
    }
}


int main() {
    std::cout << "Entrez un nombre :" << std::endl;
    int nombre;
    std::cin >> nombre;
    checking(nombre);
    return 0;
}