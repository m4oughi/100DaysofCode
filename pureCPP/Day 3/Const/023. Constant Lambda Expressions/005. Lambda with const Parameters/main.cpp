#include <iostream>

int main() {
    auto lambda = [](const int value) {
        // value is read-only inside this lambda
        std::cout << "Constant parameter value: " << value << std::endl;
    };

    lambda(50); // Prints 50
}
