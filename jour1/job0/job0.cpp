#include <iostream>

int main() {
    int a, x, y, b, c, d, i, n, p;
    // 1. Superflues : L'addition passe avant l'affectation
    a = x + 5; 

    // 2. INDISPENSABLES : On veut d'abord x = y, puis ajouter 2
    // Sans parenthèses, cela ferait x = (y + 2)
    a = (x = y) + 2; 

    // 3. Superflues : Le test (==) est prioritaire sur l'affectation (=)
    a = x == y; 

    // 4. Superflues : Les comparaisons (<) passent avant le ET (&&)
    if (a < b && c < d) { /* ... */ }

    // 5. Partiel : (i++) est inutile, mais (n + p) est OBLIGATOIRE
    // car la multiplication (*) est plus forte que l'addition (+)
    int resultat = i++ * (n + p);

    return 0;
}