#include <iostream>
#include <string>

// La fonction retourne un bool (vrai ou faux)
bool estIncluse(std::string petite, std::string grande) {
    // .find() cherche la petite chaîne dans la grande.
    // Si elle ne trouve rien, elle renvoie std::string::npos.
    if (grande.find(petite) != std::string::npos) {
        return true;
    } else {
        return false;
    }
}

int main() {
    std::string chaine1, chaine2;

    std::cout << "Entrez la chaine a rechercher (ex: 'jour') : ";
    std::cin >> chaine1;

    std::cout << "Entrez la chaine complete (ex: 'bonjour') : ";
    std::cin >> chaine2;

    // Test de la fonction
    if (estIncluse(chaine1, chaine2)) {
        std::cout << "Vrai : '" << chaine1 << "' est bien dans '" << chaine2 << "'" << std::endl;
    } else {
        std::cout << "Faux : '" << chaine1 << "' n'est pas presente." << std::endl;
    }

    return 0;
}