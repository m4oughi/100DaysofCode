#include <iostream>

int main() {
    int x = 10, y = 20, z = 30;
    auto lambda = [&, z]() {
        x += 5;
        y += 5;
        std::cout << "Inside lambda, x: " << x << ", y: " << y << ", z: " << z << std::endl;
    };

    lambda(); // Outputs: Inside lambda, x: 15, y: 25, z: 30
    std::cout << "Outside lambda, x: " << x << ", y: " << y << std::endl; // Outputs: Outside lambda, x: 15, y: 25
    return 0;
}
