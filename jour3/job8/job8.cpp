#include <iostream>
#include <string>

int main() {
    std::string saisie;
    std::cout << "Entrez une chaine de caractere : ";
    std::getline(std::cin, saisie); // Récupère toute la ligne, espaces inclus

    // 1. On crée un tableau de char. 
    // Sa taille doit être : longueur du texte + 1 (pour le \0)
    int taille = saisie.length();
    char tab[taille + 1]; 

    // 2. On copie les lettres une par une
    for (int i = 0; i < taille; i++) {
        tab[i] = saisie[i];
    }

    // 3. On ajoute le caractère de fin de chaîne
    tab[taille] = '\0';

    // Vérification
    std::cout << "Contenu du tableau tab : " << tab << std::endl;
    std::cout << "Taille reelle utilisee : " << taille + 1 << " octets." << std::endl;

    return 0;
}