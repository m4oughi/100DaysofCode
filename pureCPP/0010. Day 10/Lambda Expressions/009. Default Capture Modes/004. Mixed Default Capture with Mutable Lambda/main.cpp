#include <iostream>

int main() {
    int x = 10, y = 20;
    auto lambda = [=, &y]() mutable {
        x += 5; // Allowed due to mutable
        y += 10; // Modifies y by reference
        std::cout << "Inside lambda, x: " << x << ", y: " << y << std::endl;
    };

    lambda(); // Outputs: Inside lambda, x: 15, y: 30
    std::cout << "Outside lambda, x: " << x << ", y: " << y << std::endl; // Outputs: Outside lambda, x: 10, y: 30
    return 0;
}
