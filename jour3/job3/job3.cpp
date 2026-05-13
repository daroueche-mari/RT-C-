#include <iostream>

int compare(std::string a, std::string b) {
    if (a == b) {
        return false;
    } else {
        return true;
    }
    // std::cout << a << b <<std::endl;
}


int main() {
    std::string val1 = "jeteste";
    std::string val2 = "jeteste";
    std::cout << compare(val1, val2) << std::endl;
    return 0;
}