#include <iostream>

int main() {
    int n;
    do {
        std::cout << "Donnez un nombre : " << std::endl;
        std::cin >> n;
    } while (n <= 0);
    return 0;
}