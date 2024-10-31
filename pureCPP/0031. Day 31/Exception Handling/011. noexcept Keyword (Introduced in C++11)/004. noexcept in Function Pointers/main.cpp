#include <iostream>

void noThrow() noexcept {
    std::cout << "Function with noexcept." << std::endl;
}

void mayThrow() {
    std::cout << "Function that may throw." << std::endl;
    throw std::runtime_error("Exception thrown.");
}

int main() {
    void(*funcPtr)() noexcept = noThrow;  // Pointer to noexcept function
    funcPtr();

    try {
        void(*funcPtr2)() = mayThrow;  // Pointer to function without noexcept
        funcPtr2();
    } catch (const std::exception& e) {
        std::cout << "Caught exception: " << e.what() << std::endl;
    }
    return 0;
}
