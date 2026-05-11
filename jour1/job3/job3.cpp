#include <iostream>

int main() {
    for (int n = 1; n <= 5; n++)
    {
        std::cout << "Hello, World! " << n << std::endl;
        if (n == 5)
        {
            n = n - 5;
            if (n == 0)
            {
                std::cout << "La boucle s'arrete " << n << std::endl;
                break;
            }
        }
        
    }
    
}

