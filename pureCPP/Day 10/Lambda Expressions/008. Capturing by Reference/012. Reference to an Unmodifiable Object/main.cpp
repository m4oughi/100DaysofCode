#include <iostream>

int main() {
    const int x = 10;
    auto lambda = [&x]() {
        // x = 20; // Error: cannot modify const reference
        std::cout << "Captured x: " << x << std::endl;
    };

    lambda(); // Outputs: Captured x: 10
    return 0;
}
