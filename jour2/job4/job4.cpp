#include <iostream>

int addition(int a, int b)
{
    return a + b;
}

int soustraction(int a, int b)
{
    return a - b;
}

int multiplication(int a, int b)
{
    return a * b;
}

int division(int a, int b)
{
    if (b == 0)
    {
        std::cout << "Erreur : division par zero" << std::endl;
        return 0;
    }
    return a / b;
}

int main()
{
    int calcul;
    std::cout << "Calculatrice" << std::endl;
    std::cout << "Choisissez une operation :" << std::endl;
    std::cout << "1. Addition" << std::endl;
    std::cout << "2. Soustraction" << std::endl;
    std::cout << "3. Multiplication" << std::endl;
    std::cout << "4. Division" << std::endl;
    std::cin >> calcul;

    switch (calcul)
    {
    case 1:
    {
        std::cout << "Entrer deux nombres :" << std::endl;
        std::cout << "Nombre 1 :" << std::endl;
        int add1;
        std::cin >> add1;
        std::cout << "Nombre 2 :" << std::endl;
        int add2;
        std::cin >> add2;
        std::cout << "Addition : " << addition(add1, add2) << std::endl;
        break;
    }

    case 2:
    {
        std::cout << "Entrer deux nombres :" << std::endl;
        std::cout << "Nombre 1 :" << std::endl;
        int sub1;
        std::cin >> sub1;
        std::cout << "Nombre 2 :" << std::endl;
        int sub2;
        std::cin >> sub2;
        std::cout << "Soustraction : " << soustraction(sub1, sub2) << std::endl;
        break;
    }

    case 3:
    {
        std::cout << "Entrer deux nombres :" << std::endl;
        std::cout << "Nombre 1 :" << std::endl;
        int mul1;
        std::cin >> mul1;
        std::cout << "Nombre 2 :" << std::endl;
        int mul2;
        std::cin >> mul2;
        std::cout << "Multiplication : " << multiplication(mul1, mul2) << std::endl;
        break;
    }
    case 4:
    {
        std::cout << "Entrer deux nombres :" << std::endl;
        std::cout << "Nombre 1 :" << std::endl;
        int div1;
        std::cin >> div1;
        std::cout << "Nombre 2 :" << std::endl;
        int div2;
        std::cin >> div2;
        std::cout << "Division : " << division(div1, div2) << std::endl;
        break;
    default:
        std::cout << "Erreur : Ce choix n'existe pas dans la calculatrice !" << std::endl;
        break;
    }
    }
}