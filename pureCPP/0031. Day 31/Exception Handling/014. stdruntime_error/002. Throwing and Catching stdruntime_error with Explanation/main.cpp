#include <iostream>
#include <stdexcept>

int main() {
    try {
        throw std::runtime_error("File not found");
    } catch (const std::runtime_error& e) {
        std::cout << "Error: " << e.what() << std::endl;
    }
    return 0;
}
