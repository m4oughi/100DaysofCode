#include <iostream>

int main() {
    int x = 5;
    int y = 10;
    auto modifyValues = [x, y]() mutable {
        x += 2;
        y *= 2;
        std::cout << "Inside lambda, x: " << x << ", y: " << y << std::endl;
    };

    modifyValues(); // Outputs: Inside lambda, x: 7, y: 20
    std::cout << "Outside lambda, x: " << x << ", y: " << y << std::endl; // Outputs: Outside lambda, x: 5, y: 10
    return 0;
}
