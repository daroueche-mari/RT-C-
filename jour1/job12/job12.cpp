#include <iostream>

float somme(float a, float b, float c, float d, float e) {
    return a + b + c + d + e;
}

float nbvaleurs() {
    return 5.0;
}


int main() {
    std::cout << "Entrez un premier nombre : ";
    float nombre1;
    std::cin >> nombre1;
    std::cout << "Entrez un deuxieme nombre : ";
    float nombre2;
    std::cin >> nombre2;
    std::cout << "Entrez un troisieme nombre : ";
    float nombre3;
    std::cin >> nombre3;
    std::cout << "Entrez un quatrieme nombre : ";
    float nombre4;
    std::cin >> nombre4;
    std::cout << "Entrez un cinquieme nombre : ";
    float nombre5;
    std::cin >> nombre5;
    std::cout << "La moyenne des nombres est : " << somme(nombre1, nombre2, nombre3, nombre4, nombre5)/nbvaleurs() << std::endl;
}