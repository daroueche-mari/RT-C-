#include <iostream>
#include <cmath>


void values(int val) {

    for (int i = 5; i <= val; i++)
    {
        std::cout << i * i * i << std::endl;
    }
}

int main() {    
    std::cout << "Entrez la valeur de N : ";
    int nombre1;
    std::cin >> nombre1;
    values(nombre1);
}