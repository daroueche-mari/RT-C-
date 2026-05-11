#include <iostream>
#include <algorithm> // OBLIGATOIRE POUR LA FONCTION REVERSE
#include <vector>


void reverse(int a, int b, int c, int d, int e) {
    std::vector<int> valeur = {a, b, c, d, e};
    
    // On inverse l'ordre dans le vecteur
    std::reverse(valeur.begin(), valeur.end());
    
    // AJOUT : On affiche les éléments un par un
    for (int n : valeur) {
        std::cout << n << " ";
    }
    std::cout << std::endl; // Retour à la ligne à la fin
}



int main() {
    std::cout << "Entrez un nombre : ";
    int nombre1;
    std::cin >> nombre1;
    std::cout << "Entrez un deuxieme nombre : ";
    int nombre2;
    std::cin >> nombre2;
    std::cout << "Entrez un troisieme nombre : ";
    int nombre3;
    std::cin >> nombre3;
    std::cout << "Entrez un quatrieme nombre : ";
    int nombre4;
    std::cin >> nombre4;
    std::cout << "Entrez un cinquieme nombre : ";
    int nombre5;
    std::cin >> nombre5;
    std::cout << "Les nombres dans l'ordre inverse sont : " << std::endl;
    reverse(nombre1, nombre2, nombre3, nombre4, nombre5);
}