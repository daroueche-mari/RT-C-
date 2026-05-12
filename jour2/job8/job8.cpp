#include <iostream>

void showValues(int b) {
    int a = 0;
    while (a <= b)
    {
        std::cout << a << std::endl;
        a++;
    }
    
}




int main() {
    std::cout << "Entrer un nombre :" << std::endl;
    int nombre;
    std::cin >> nombre;
    showValues(nombre);
    return 0;
}