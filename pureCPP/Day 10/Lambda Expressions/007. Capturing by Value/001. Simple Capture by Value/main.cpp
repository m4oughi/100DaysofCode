#include <iostream>

int main() {
    int x = 5;
    auto lambda = [x]() {
        std::cout << "Captured x: " << x << std::endl;
    };

    x = 10;
    lambda(); // Outputs: Captured x: 5
    return 0;
}
