#ifndef Contact_hpp
#define Contact_hpp

#include <iostream>

class Contact
{
private:
    std::string nom;
    int numero;

public:
    Contact(std::string nom, int numero)
    {
        this->nom = nom;
        this->numero = numero;
    }

    Contact()
    {
        nom = "";
        numero = 0;
    }

    // Setters
    void setname(std::string myname)
    {
        this->nom = myname;
    }

    void setnumber(int mynumero)
    {
        this->numero = mynumero;
    }
    void setcopy(Contact &autreContact)
    {
        this->nom = autreContact.getname();
        this->numero = autreContact.getnumber();
    }

    // Getters
    std::string getname()
    {
        return this->nom;
    }
    int getnumber()
    {
        return this->numero;
    }
};

#endif