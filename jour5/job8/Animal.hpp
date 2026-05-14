#ifndef Animal_hpp
#define Animal_hpp

#include <iostream>


class Animal {

public :

virtual ~Animal() {}

virtual void crier() const = 0;
virtual void manger() const = 0;

};

class Chien : public Animal {
public :
    void crier() const override{
        std::cout << "Woof!"<<std::endl;
    }
    void manger() const override{
        std::cout << "Le chien mange a une alimentation variée."<<std::endl;
    }
};

class Chat : public Animal {
public :
    void crier() const override {
        std::cout << "Miaou!" <<std::endl;
    }
    void manger() const override {
        std::cout << "Le chat mange du poisson." <<std::endl;
    }
};


#endif