#include <iostream>
#include <stdexcept>

int main() {
    auto throwError = []() {
        throw std::runtime_error("Lambda exception thrown!");
    };

    try {
        throwError();
    } catch (const std::runtime_error& e) {
        std::cout << "Caught exception: " << e.what() << std::endl; // Outputs: Caught exception: Lambda exception thrown!
    }

    return 0;
}
