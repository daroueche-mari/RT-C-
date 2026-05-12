#include <iostream>

int main(){
    int n;
    std::cin >> n;
    switch(n)
    {
        case 0 : std::cout << "Nul\n"; 
        case 1 : 
        case 2 : std::cout << "Petit\n";
                 break;

        case 3 :
        case 4 :
        case 5 : std::cout << "Moyen\n";
        default : std::cout << "Grand\n";
        // Resultat pour 0 = Nul et Petit
        // Resultat pour 1 = Petit
        // Resultat pour 4 = Moyen Et Grand
        // Resultat pour 10 = Grand
        // Resultat pour -5 = Grand
    }
}