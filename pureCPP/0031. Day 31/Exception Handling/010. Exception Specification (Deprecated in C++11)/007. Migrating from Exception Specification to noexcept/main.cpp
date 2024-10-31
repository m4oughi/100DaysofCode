#include <iostream>
#include <stdexcept>

// Old style (deprecated)
void oldStyle() throw(std::runtime_error) {
    std::cout << "Old style exception specification (deprecated)" << std::endl;
    throw std::runtime_error("Runtime error");
}

// Modern style (noexcept)
void modernStyle() noexcept(false) {
    std::cout << "Modern style with noexcept" << std::endl;
    throw std::runtime_error("Runtime error");
}

int main() {
    try {
        oldStyle();
    } catch (const std::exception& e) {
        std::cout << "Caught exception from oldStyle: " << e.what() << std::endl;
    }

    try {
        modernStyle();
    } catch (const std::exception& e) {
        std::cout << "Caught exception from modernStyle: " << e.what() << std::endl;
    }

    return 0;
}
