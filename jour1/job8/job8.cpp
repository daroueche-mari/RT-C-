#include <iostream>

void verification(int n) {
    if (n % 4 == 0 && n % 100 != 0 || (n % 400 == 0)) {
        std::cout << "L'annee est bissextile." << std::endl;
    } else {
        std::cout << "L'annee n'est pas bissextile." << std::endl;
    }
}


int main() {
    std::cout << "Choisissez une annee : ";
    int nombre;
    std::cin >> nombre; 
    std::cout << "Le test de verification de l'annee " << nombre << " est : "<< std::endl;
    verification(nombre);
}