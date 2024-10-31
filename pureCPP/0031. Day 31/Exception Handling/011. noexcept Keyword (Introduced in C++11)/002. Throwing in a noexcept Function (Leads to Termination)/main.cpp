#include <iostream>
#include <stdexcept>

void noThrow() noexcept {
    std::cout << "Attempting to throw an exception inside noexcept." << std::endl;
    throw std::runtime_error("Exception thrown in noexcept function!");
}

int main() {
    try {
        noThrow();
    } catch (...) {
        std::cout << "This will never be reached." << std::endl;
    }
    return 0;
}
