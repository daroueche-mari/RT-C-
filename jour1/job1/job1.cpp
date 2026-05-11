#include <iostream>
#include <typeinfo> // Pour voir les types

int main() {
    char c = '\x01';
    short int p = 10;

    auto x = p + 3;
    auto y = c + 1;
    auto z = p + c;
    auto w = 3 * p + 5 * c;

    std::cout << "x : " << x << " (Type: " << typeid(x).name() << ")" << std::endl;
    std::cout << "y : " << y << " (Type: " << typeid(y).name() << ")" << std::endl;
    std::cout << "z : " << z << " (Type: " << typeid(z).name() << ")" << std::endl;
    std::cout << "w : " << w << " (Type: " << typeid(w).name() << ")" << std::endl;

    return 0;
}