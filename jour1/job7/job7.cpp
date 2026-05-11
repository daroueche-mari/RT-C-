#include <iostream>

void verification(int n) {
    if (n % 10 == 2 || n % 10 == 4 || n % 10 == 6 || n % 10 == 8 || n % 10 == 0) {
        std::cout << "Le nombre est pair." << std::endl;
    } else if (n % 10 == 1 || n % 10 == 3 || n % 10 == 5 || n % 10 == 7 || n % 10 == 9) {
        std::cout << "Le nombre est impair." << std::endl;
    }
}

int main() {
    std::cout << "Entrez un nombre : ";
    int nombre1;
    std::cin >> nombre1;
    std::cout << "Le test du nombre " << nombre1 << " est : "<< std::endl;
    verification(nombre1);
}