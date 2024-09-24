#include <iostream>
#include <functional>
#include <stdexcept>

int main() {
    std::function<void()> func = []() {
        throw std::runtime_error("Exception in std::function lambda!");
    };

    try {
        func();
    } catch (const std::runtime_error& e) {
        std::cout << "Caught exception: " << e.what() << std::endl; // Outputs: Caught exception: Exception in std::function lambda!
    }

    return 0;
}
