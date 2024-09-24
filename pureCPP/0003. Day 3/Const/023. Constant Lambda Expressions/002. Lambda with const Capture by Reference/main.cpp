#include <iostream>

int main() {
    int value = 20;

    auto lambda = [&value]() mutable {
        // value is captured by reference, but cannot be modified in this lambda
        std::cout << "Captured value (mutable): " << value << std::endl;
    };

    lambda(); // Prints 20
}
