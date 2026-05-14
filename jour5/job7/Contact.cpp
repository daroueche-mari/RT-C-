#include "Contact.hpp"
#include <iostream>


int main() {
    Contact contactUn("x", 0);
    Contact copieContact;

    std::cout << "Mes Contacts" <<std::endl;

    contactUn.setname("Fred");
    contactUn.setnumber(557820);
    copieContact.setcopy(contactUn);

    std::cout << "Nom : " << contactUn.getname() 
    << " | Numero de Tel : " << contactUn.getnumber() <<std::endl;

    std::cout << "Copie des informations";
    std::cout << "Info : " << copieContact.getname() << " | " << copieContact.getnumber() <<std::endl;
}