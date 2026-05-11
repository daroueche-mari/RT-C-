#include <iostream>

int getn(int n) {
    return n;
}

int setn(int &n, int x) {
    n = x;
    return x;
}
 
int getm(int m) {
    return m;
}

int setm(int &m, int z) {
    m = z;
    return z;
}


int main() {
    std::cout << "Entrez la valeur de N : ";
    int nombre1;
    std::cin >> nombre1;
    std::cout << "Changer la valeur de N par : ";
    int nombre2;
    std::cin >> nombre2;
    std::cout << "Entrez la valeur de M : ";
    int nombre3;
    std::cin >> nombre3;
    std::cout << "Changer la valeur de M par : ";
    int nombre4;
    std::cin >> nombre4;

    std::cout << "La valeur de N est : " << getn(nombre1) << std::endl;
    std::cout << "La valeur de N est remplacé par : " << setn(nombre1, nombre2) << std::endl;

    std::cout << "La valeur de M est : " << getm(nombre3) << std::endl;
    std::cout << "La valeur de M est remplace par : " << setm(nombre3, nombre4) << std::endl;
}