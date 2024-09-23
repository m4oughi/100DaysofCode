#include <iostream>

int main() {
    int x = 5;
    auto changeX = [x]() mutable {
        x += 10;
        std::cout << "Inside lambda, x: " << x << std::endl; // Outputs: Inside lambda, x: 15
    };

    changeX();
    std::cout << "Outside lambda, x: " << x << std::endl; // Outputs: Outside lambda, x: 5
    return 0;
}
