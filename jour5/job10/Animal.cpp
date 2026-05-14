#include "Animal.hpp"
#include <iostream>

int main() {
    std::cout << "Nombre d'animaux au depart : " << Animal::getTotal() << std::endl;

    Chien dog1;
    Chien dog2;
    Chat cat1;

    std::cout << "Apres creation de 2 chiens et 1 chat..." << std::endl;
    std::cout << "Total Animaux : " << Animal::getTotal() << std::endl;

    // Test des cris pour vérifier que le reste fonctionne toujours
    dog1.crier();
    cat1.crier();
    cat1.manger("des croquettes");

    return 0;
}