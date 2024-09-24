#include <iostream>

int main() {
    int value = 100;

    auto lambda = [value]() noexcept {
        // value is read-only, and lambda is declared noexcept
        std::cout << "Constant value in noexcept lambda: " << value << std::endl;
    };

    lambda(); // Prints 100
}
