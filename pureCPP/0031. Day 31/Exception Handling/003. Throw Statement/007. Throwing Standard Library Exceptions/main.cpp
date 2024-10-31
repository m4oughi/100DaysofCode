#include <iostream>
#include <stdexcept>

int main() {
    try {
        throw std::out_of_range("Out of range error!");  // Throwing a standard exception
    } catch (const std::out_of_range& e) {
        std::cout << "Caught exception: " << e.what() << std::endl;
    }
    return 0;
}
