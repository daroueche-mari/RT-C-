#include <iostream>

int main() {
    int limite;
    long long a = 0, b = 1, suivant = 0;

    std::cout << "Entrez la limite maximale pour la suite de Fibonacci : ";
    std::cin >> limite;

    std::cout << "Suite de Fibonacci jusqu'a " << limite << " :" << std::endl;

    // On affiche le premier terme manuellement s'il est dans la limite
    if (limite >= 0) std::cout << a;

    while (true) {
        suivant = a + b; // On calcule le futur nombre
        
        if (suivant > limite) break; // Si on dépasse la limite, on s'arrête

        std::cout << ", " << suivant;
        
        // Le "jeu de chaises musicales" :
        a = b;       // L'ancien 'b' devient le nouveau 'a'
        b = suivant; // Le nouveau 'suivant' devient le nouveau 'b'
    }

    std::cout << std::endl;
    return 0;
}