#include <iostream>
#include <string>
#include <algorithm> // Pour std::remove_if

int main() {
    std::string texte = "vive la plateforme !";
    std::string voyelles = "aeiouyAEIOUY"; // On gère aussi les majuscules au cas où

    // On efface les caractères si on les trouve dans la chaîne 'voyelles'
    texte.erase(std::remove_if(texte.begin(), texte.end(), [voyelles](char c) {
        // La fonction find cherche si le caractère 'c' est dans 'voyelles'
        // Si find ne renvoie pas 'npos', c'est qu'il a trouvé le caractère
        return voyelles.find(c) != std::string::npos;
    }), texte.end());

    std::cout << "Resultat : " << texte << std::endl;

    return 0;
}