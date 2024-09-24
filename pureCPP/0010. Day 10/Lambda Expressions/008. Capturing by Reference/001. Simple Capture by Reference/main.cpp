#include <iostream>

int main() {
    int x = 10;
    auto lambda = [&x]() {
        std::cout << "Captured x by reference: " << x << std::endl;
    };

    x = 20; 
    lambda(); // Outputs: Captured x by reference: 20
    return 0;
}
