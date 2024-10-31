#include <iostream>
#include <stdexcept>

int main() {
    try {
        throw std::runtime_error("Generic runtime error");
    } catch (const std::runtime_error& e) {
        std::cout << "Caught runtime_error: " << e.what() << std::endl;
    }
    return 0;
}
