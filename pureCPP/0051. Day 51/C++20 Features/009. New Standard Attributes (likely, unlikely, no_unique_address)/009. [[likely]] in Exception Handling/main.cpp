#include <iostream>

void performOperation(bool fail) {
    try {
        if (!fail) [[likely]] {
            std::cout << "Operation successful\n";
        } else {
            throw std::runtime_error("Failure occurred");
        }
    } catch (const std::exception& e) [[unlikely]] {
        std::cout << "Exception caught: " << e.what() << "\n";
    }
}

int main() {
    performOperation(false); // Fast path
    performOperation(true);  // Rare case
}
