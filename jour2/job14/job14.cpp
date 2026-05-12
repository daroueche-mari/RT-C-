#include <iostream>
#include <cmath>   // Pour std::pow()
#include <string>  // Pour compter les chiffres facilement

int main() {
    int nombre, original, reste, n = 0;
    double resultat = 0.0;

    std::cout << "Entrez un nombre entier : ";
    std::cin >> nombre;

    original = nombre; // On stocke le nombre pour la comparaison finale

    // 1. On compte le nombre de chiffres
    // Astuce : transformer en string ou utiliser une boucle de division par 10
    std::string s = std::to_string(nombre);
    n = s.length();

    // 2. Extraction et calcul
    int temp = nombre;
    while (temp != 0) {
        reste = temp % 10; // Récupère le dernier chiffre
        resultat += std::pow(reste, n); // Chiffre élevé à la puissance n
        temp /= 10;        // Supprime le dernier chiffre
    }

    // 3. Vérification finale
    // On utilise un petit écart (0.5) car pow() renvoie un double et peut être imprécis
    if ((int)(resultat + 0.5) == original) {
        std::cout << original << " est un nombre narcissique !" << std::endl;
    } else {
        std::cout << original << " n'est pas un nombre narcissique." << std::endl;
    }

    return 0;
}