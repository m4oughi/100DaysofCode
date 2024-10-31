#include <iostream>
#include <stdexcept>

int main() {
    try {
        int large = 2147483647;  // Maximum value of int
        large++;
        throw std::overflow_error("Integer overflow occurred");
    } catch (const std::overflow_error& e) {
        std::cout << "Caught overflow_error: " << e.what() << std::endl;
    }
    return 0;
}
