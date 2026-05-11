#include <iostream>

float total(float a, float b, int c) {
    return (a * b) * (1 + c / 100.0);
}


int main() {
    std::cout << "Choisissez le prix HT d'un produit : ";
    float prixHT;
    std::cin >> prixHT;
    std::cout << "Choisissez le nombre de kilo de ce produit : ";
    float poids;
    std::cin >> poids;
    int tauxTVA = 15; 
    std::cout << "Le prix TTC est de : " << total(prixHT, poids, tauxTVA) << " euros." << std::endl;
}