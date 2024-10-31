#include <iostream>
#include <stdexcept>

int main() {
    try {
        throw std::logic_error("Invalid calculation");
    } catch (const std::logic_error& e) {
        std::cout << "Error: " << e.what() << std::endl;
    }
    return 0;
}
