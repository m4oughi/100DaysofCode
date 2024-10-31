#include <iostream>
#include <stdexcept>

void mayThrow() throw(std::runtime_error) {
    throw std::runtime_error("This function may throw a runtime_error");
}

int main() {
    try {
        mayThrow();
    } catch (const std::runtime_error& e) {
        std::cout << "Caught exception: " << e.what() << std::endl;
    }
    return 0;
}
