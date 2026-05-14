#include "Personne.hpp"
#include <iostream>

int main() {
    Personne Aqua("xx", 0, 0);
    Personne Volta("xx", 0, 0);

    std::cout << "Ma Fiche Personnage" <<std::endl;

    Aqua.setname("Aqua");
    Aqua.sethealth(100);
    Aqua.setdefense(50);

    std::cout << "Nom P1: " << Aqua.getname() << 
    " | Vie P1: " << Aqua.gethealth() << " | Defense P1: " << Aqua.getdefense() <<std::endl;

    Volta.setname("Volta");
    Volta.sethealth(100);
    Volta.setdefense(40);

    std::cout << "Nom P2: " << Volta.getname() << 
    " | Vie P2: " << Volta.gethealth() << " | Defense P2: " << Volta.getdefense() <<std::endl;

    std::cout << "Modification des valeurs des personnages" <<std::endl;


    Aqua.modifyname("Super Aqua");
    Aqua.modifyhealth(200);
    Aqua.modifydefense(60);

    std::cout << "Nouveau Nom P1: " << Aqua.getname() << 
    " | Nouvelle Vie P1: " << Aqua.gethealth() << " | Nouvelle Defense P1: " << Aqua.getdefense() <<std::endl;

    Volta.modifyname("Super Volta");
    Volta.modifyhealth(200);
    Volta.modifydefense(57);

    std::cout << "Nouveau Nom P2: " << Volta.getname() << 
    " | Nouvelle Vie P2: " << Volta.gethealth() << " | Nouvelle Defense P2: " << Volta.getdefense() <<std::endl;
}