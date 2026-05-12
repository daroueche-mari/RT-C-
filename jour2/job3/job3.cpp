#include <iostream>


int main() {
    int n, som, i;
    som = 0;
    i = 0;
    do {
        std::cout << "Entrez un nombre entier :" << std::endl;
        std::cin >> n;
        som += n;
        i++;


    } while (i < 4);
    std::cout << "La somme des nombres est : " << som << std::endl;
    return 0;
}