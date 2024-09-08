#include <iostream>

int main() {
    int value = 10;

    auto lambda = [value]() {
        std::cout << "Captured value: " << value << std::endl;
    };

    lambda(); // Prints 10
}
