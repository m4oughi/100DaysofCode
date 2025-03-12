#include <iostream>

void mayThrow() {
    throw std::runtime_error("Error occurred!");
}

void safeFunction() noexcept {
    mayThrow(); // Warning: noexcept function calls a potentially throwing function
}

int main() {
    try {
        safeFunction();
    } catch (...) {
        std::cout << "Caught an exception!" << std::endl;
    }
    return 0;
}
