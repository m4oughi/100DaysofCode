#include <iostream>

int main() {
    int value = 40;

    auto lambda = [value]() mutable {
        // value can be modified inside the lambda
        value += 10;
        std::cout << "Modified value: " << value << std::endl;
    };

    lambda(); // Prints 50
}
