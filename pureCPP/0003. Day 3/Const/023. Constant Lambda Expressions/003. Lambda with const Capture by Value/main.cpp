#include <iostream>

int main() {
    int value = 30;

    auto lambda = [value]() {
        // value is captured by value, and is read-only within this lambda
        std::cout << "Captured value (const): " << value << std::endl;
    };

    lambda(); // Prints 30
}
