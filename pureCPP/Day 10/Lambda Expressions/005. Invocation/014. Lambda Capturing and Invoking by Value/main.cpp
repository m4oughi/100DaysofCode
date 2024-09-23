#include <iostream>

int main() {
    int x = 10;
    auto captureByValue = [x]() mutable {
        x += 5;
        std::cout << "Inside lambda, x: " << x << std::endl; // Outputs: Inside lambda, x: 15
    };

    captureByValue();
    std::cout << "Outside lambda, x: " << x << std::endl; // Outputs: Outside lambda, x: 10
    return 0;
}
