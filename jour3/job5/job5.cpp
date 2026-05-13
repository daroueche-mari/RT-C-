#include <iostream>
#include <string>
#include <cctype> // Pour std::isdigit

bool verifierFormatHeure(std::string heure) {
    // 1. Vérifier la longueur (XXhXX = 5 caractères)
    if (heure.length() != 5) {
        return false;
    }

    // 2. Vérifier la présence du 'h' au milieu (index 2)
    if (heure[2] != 'h' && heure[2] != 'H') {
        return false;
    }

    // 3. Vérifier que les autres sont des chiffres
    // On vérifie les index 0, 1 (heures) et 3, 4 (minutes)
    if (!std::isdigit(heure[0]) || !std::isdigit(heure[1]) ||
        !std::isdigit(heure[3]) || !std::isdigit(heure[4])) {
        return false;
    }

    return true;
}

int main() {
    std::string saisie;
    std::cout << "Entrez une heure (format XXhXX) : ";
    std::cin >> saisie;

    if (verifierFormatHeure(saisie)) {
        std::cout << "Format valide !" << std::endl;
    } else {
        std::cout << "Format invalide. Respectez bien 'XXhXX'." << std::endl;
    }

    return 0;
}