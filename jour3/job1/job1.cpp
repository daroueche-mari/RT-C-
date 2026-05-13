#include <iostream>


int change(std::string x) {
    if (x == "vive la plateforme") {
        x = "VIVE LA PLATEFORME !";
    }
    std::cout << x <<std::endl;
    return 0;
}

int main() {
    std::string txt = "vive la plateforme";
    std::cout << change(txt) <<std::endl;
}