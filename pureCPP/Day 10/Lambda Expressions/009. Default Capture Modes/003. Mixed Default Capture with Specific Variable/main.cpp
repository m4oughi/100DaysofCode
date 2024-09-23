#include <iostream>

int main() {
    int x = 10, y = 20, z = 30;
    auto lambda = [=, &y]() {
        std::cout << "Captured x: " << x << ", y: " << y << ", z: " << z << std::endl;
        y += 5;
    };

    y = 50; 
    lambda(); // Outputs: Captured x: 10, y: 50, z: 30
    std::cout << "Modified y outside: " << y << std::endl; // Outputs: Modified y outside: 55
    return 0;
}
