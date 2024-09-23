#include <iostream>

int main() {
    int x = 10, y = 20;
    auto lambda = [=](int z) {
        std::cout << "Captured x: " << x << ", y: " << y << ", z: " << z << std::endl;
    };

    lambda(30); // Outputs: Captured x: 10, y: 20, z: 30
    return 0;
}
