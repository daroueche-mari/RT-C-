#include <iostream>

int addition(int a, int b) {
        return a + b;
}

int main() {    
   std::cout << "Entrez un nombre : ";
    int nombre1;
    std::cin >> nombre1;
    std::cout << "Entrez un autre nombre : ";
    int nombre2;
    std::cin >> nombre2;
    std::cout << "La somme des deux nombres est : " << addition(nombre1, nombre2) << std::endl;
}
