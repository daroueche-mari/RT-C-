#include <iostream>
#include <string>
#include <vector>
#include <algorithm> // Pour std::reverse

// Fonction qui vérifie si une chaîne est un palindrome
bool estPalindrome(std::string mot) {
    std::string inverse = mot;
    
    // On inverse la chaîne 'inverse'
    std::reverse(inverse.begin(), inverse.end());
    
    // Si le mot original est identique au mot inversé, c'est un palindrome
    return (mot == inverse);
}

int main() {
    // 1. Création du tableau de chaînes
    std::string tab[] = {"radar", "hello", "level", "stats", "world"};
    int taille = 5;

    std::cout << "Recherche des palindromes dans le tableau :" << std::endl;

    // 2. Parcours du tableau
    for (int i = 0; i < taille; i++) {
        if (estPalindrome(tab[i])) {
            std::cout << "- " << tab[i] << " est un palindrome." << std::endl;
        }
    }

    return 0;
}