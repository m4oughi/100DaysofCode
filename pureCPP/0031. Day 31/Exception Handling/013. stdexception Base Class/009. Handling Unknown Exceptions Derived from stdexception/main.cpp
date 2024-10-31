#include <iostream>
#include <stdexcept>

void process() {
    throw std::range_error("Range error occurred");  // Derived from std::exception
}

int main() {
    try {
        process();
    } catch (const std::exception& e) {
        std::cout << "Caught exception: " << e.what() << std::endl;  // Handling unknown types derived from std::exception
    }
    return 0;
}
