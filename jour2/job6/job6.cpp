#include <iostream>

void iteration(int n)
{
    for (int i = 0; i <= n; i++)
    {
        if (i % 3 == 0)
        {
            std::cout << i << " est un multiple de 3" << std::endl;
        }
        else if (i % 5 == 0)
        {
            std::cout << i << " est un multiple de 5" << std::endl;
        }
        std::cout << i << std::endl;
    }
}

int main()
{
    std::cout << "Entrez la valeur de n :" << std::endl;
    int nombre;
    std::cin >> nombre;
    iteration(nombre);
    return 0;
}