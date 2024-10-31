#include <iostream>
#include <stdexcept>

int main() {
    try {
        throw std::runtime_error("Runtime error occurred");
    } catch (const std::runtime_error& e) {
        std::cout << "Caught std::runtime_error: " << e.what() << std::endl;
    }
    return 0;
}
