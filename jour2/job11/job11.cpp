#include <iostream>

long long factorielle(int n)
{
    if (n <= 1)
        return 1;
    return n * factorielle(n - 1);
}

int main()
{
    std::cout << "Entrez un nombre positif:" << std::endl;
    int nombre;
    std::cin >> nombre;
    std::cout << factorielle(nombre) << std::endl;
}