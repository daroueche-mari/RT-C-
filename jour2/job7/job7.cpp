#include <iostream>


void showValues(int b) {
    for (int a = 0; a <= b; a++)
    {
        std::cout << a << std::endl;   
    }
}


int main() {
    std::cout << "Entrer un nombre :" << std::endl;
    int nombre;
    std::cin >> nombre;
    showValues(nombre);
    return 0;
}