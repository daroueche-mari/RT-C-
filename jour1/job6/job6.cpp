#include <iostream>

void showtable(int n) {

    for (int x = 0; x <= 10; x++)
    {
        std::cout << n << " * " << x << " = " << n * x << std::endl;
    }
    
}

int main() {    
   std::cout << "Entrez un nombre : ";
    int nombre1;
    std::cin >> nombre1;
    std::cout << "La table de multiplication de " << nombre1 << " est : " << std::endl;
    showtable(nombre1);
}
