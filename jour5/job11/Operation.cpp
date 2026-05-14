#include "Operation.hpp"
#include <iostream>

int main() {
    Operation a(10);
    Operation b(5);

    Operation resultat = a + b; // Simple et propre !

    std::cout << "Resultat : " << resultat.valeur << std::endl;

    return 0;
}