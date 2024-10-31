#include <iostream>
#include <stdexcept>

int main() {
    try {
        throw std::invalid_argument("Invalid argument passed");
    } catch (const std::exception& e) {
        std::cout << "Caught exception: " << e.what() << std::endl;  // Catches all exceptions derived from std::exception
    }
    return 0;
}
