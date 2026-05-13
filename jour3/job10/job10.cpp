#include <iostream>
#include <string>

int main() {
    // 1. Demander la saisie à l'utilisateur
    std::string string;
    std::cout << "Entrez une chaine de caractere : ";
    std::getline(std::cin, string);

    // 2. Créer la deuxième variable
    std::string string2 = "Bonjour";

    std::cout << "\n--- Tri Lexicographique ---" << std::endl;

    // 3. Comparaison et affichage dans l'ordre
    if (string < string2) {
        std::cout << "1ere : " << string << std::endl;
        std::cout << "2eme : " << string2 << std::endl;
    } else {
        std::cout << "1ere : " << string2 << std::endl;
        std::cout << "2eme : " << string << std::endl;
    }

    return 0;
}