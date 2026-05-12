#include <iostream>

void checkstate(int b, int c)
{

    for (int a = 0; a <= b; a++)
    {
        std::cout << a << std::endl;
        if (a == b)
        {
            if (c >= 0 && c <= b)
            {
                std::cout << ", GAGNE !" << std::endl;
            }
            else
            {
                std::cout << "PERDU" << std::endl;
            }
        }
    }
}

int main()
{
    std::cout << "Choisissez l'intervalle entre a et b (a = 0)" << std::endl;
    int inter;
    std::cin >> inter;
    std::cout << "Choisissez le nombre entier" << std::endl;
    int nombre;
    std::cin >> nombre;
    checkstate(inter, nombre);
    return 0;
}