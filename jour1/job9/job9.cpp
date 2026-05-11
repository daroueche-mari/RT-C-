#include <iostream>

void finder(int a, int b, int c) {
    if (a > b && a > c) {
        std::cout << a << std::endl; }
    else if (b > a && b > c) {
        std::cout << b << std::endl; }
    else if (c > a && c > b) {
        std::cout << c << std::endl; }
        else {
            std::cout << "Les nombres sont soit egaux, soit nuls." << std::endl;
        }
}
    



int main() {
    std::cout << "Entrez un nombre : ";
    int nombre1;
    std::cin >> nombre1;
    std::cout << "Entrez un deuxieme nombre : ";
    int nombre2;
    std::cin >> nombre2;
    std::cout << "Entrez un dernier nombre : ";
    int nombre3;
    std::cin >> nombre3;
    std::cout << "Le plus grand nombre est :" << std::endl;
    finder(nombre1, nombre2, nombre3);
}