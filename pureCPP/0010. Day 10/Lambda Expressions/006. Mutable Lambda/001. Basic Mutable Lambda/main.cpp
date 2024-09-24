#include <iostream>

int main() {
    int x = 10;
    auto increment = [x]() mutable {
        x += 5; // Modifying the captured value
        std::cout << "Inside lambda, x: " << x << std::endl;
    };

    increment(); // Outputs: Inside lambda, x: 15
    std::cout << "Outside lambda, x: " << x << std::endl; // Outputs: Outside lambda, x: 10
    return 0;
}
