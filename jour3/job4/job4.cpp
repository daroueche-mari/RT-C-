#include <iostream>

int datalenght(std::string a) {
    return a.length();    
}


int main() {
    std::string texte = "vive la plateforme !";
    std::cout << "La taiile est :" << datalenght(texte) <<std::endl;
}