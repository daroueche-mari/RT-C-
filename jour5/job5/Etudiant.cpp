#include "Etudiant.hpp"
#include <iostream>

int main() {
    Etudiant mystudent("Un", "Test", 18, 112244);

    std::cout << "Fiche de mon Eleve" <<std::endl;
    mystudent.setname("Jean");
    std::cout << mystudent.getname() <<std::endl;
    mystudent.setfirstname("Yves");
    std::cout << mystudent.getfirstname() <<std::endl;
    mystudent.setage(25);
    std::cout << mystudent.getage() <<std::endl;
    mystudent.setmatricule(7057);
    std::cout << mystudent.getmatricule() <<std::endl;
}