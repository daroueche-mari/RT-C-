#include <iostream>
#include <vector>
#include <string>
#include <memory> // Pour une gestion propre si nécessaire

using namespace std;

// 1. Définition de la structure
struct Voyage {
    string destination;
    int tempsVol; // en minutes
};

int main() {
    // 2. Création du vecteur de pointeurs
    vector<Voyage*> listeVoyages;
    char continuer;

    do {
        // Allocation dynamique d'une nouvelle structure
        Voyage* nouveauVoyage = new Voyage;

        cout << "\n--- Saisie d'un nouveau voyage depuis Marseille ---" << endl;
        cout << "Destination : ";
        getline(cin >> ws, nouveauVoyage->destination); // ws ignore les espaces blancs

        cout << "Temps de vol (en minutes) : ";
        cin >> nouveauVoyage->tempsVol;

        // Stockage du pointeur dans le vecteur
        listeVoyages.push_back(nouveauVoyage);

        cout << "Voulez-vous ajouter une autre destination ? (y/n) : ";
        cin >> continuer;

    } while (continuer == 'y' || continuer == 'Y');

    // 3. Parcours du conteneur et affichage des données
    cout << "\n--- Liste des destinations enregistrées ---" << endl;
    for (Voyage* v : listeVoyages) {
        cout << "Destination : " << v->destination << " | Temps : " << v->tempsVol << " min" << endl;
    }

    // 4. Modification des données via les pointeurs
    // Exemple : On ajoute 10 minutes de retard à chaque vol
    cout << "\n--- Modification en cours (Ajout de 10min de retard) ---" << endl;
    for (Voyage* v : listeVoyages) {
        v->tempsVol += 10;
        v->destination += " (Modifié)";
        
        // Affichage des nouvelles valeurs
        cout << "Nouveau statut -> " << v->destination << " : " << v->tempsVol << " min" << endl;
    }

    // 5. Libération de la mémoire (Crucial car nous avons utilisé 'new')
    for (Voyage* v : listeVoyages) {
        delete v;
    }
    listeVoyages.clear();

    cout << "\nMémoire libérée. Bon voyage !" << endl;

    return 0;
}