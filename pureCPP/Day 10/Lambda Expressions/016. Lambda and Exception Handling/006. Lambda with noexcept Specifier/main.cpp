#include <iostream>
#include <stdexcept>

int main() {
    auto lambda = []() noexcept {
        std::cout << "This lambda cannot throw exceptions." << std::endl;
    };

    lambda(); // No exceptions can be thrown from this lambda
    return 0;
}
