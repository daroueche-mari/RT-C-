#ifndef OPERATION_HPP
#define OPERATION_HPP

class Operation {
public:
    double valeur; // On le met en public pour simplifier au maximum

    Operation(double v) {
        this->valeur = v;
    }

    // Surcharge du +
    Operation operator+(Operation autre) {
        return Operation(this->valeur + autre.valeur);
    }

    // Surcharge du -
    Operation operator-(Operation autre) {
        return Operation(this->valeur - autre.valeur);
    }

    // Surcharge du *
    Operation operator*(Operation autre) {
        return Operation(this->valeur * autre.valeur);
    }
};

#endif