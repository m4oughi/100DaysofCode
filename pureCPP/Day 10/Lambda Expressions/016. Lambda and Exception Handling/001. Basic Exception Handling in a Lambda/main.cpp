#include <iostream>
#include <stdexcept>

int main() {
    auto lambda = []() {
        try {
            throw std::runtime_error("Error inside lambda!");
        } catch (const std::runtime_error& e) {
            std::cout << "Caught exception: " << e.what() << std::endl;
        }
    };

    lambda(); // Outputs: Caught exception: Error inside lambda!
    return 0;
}
