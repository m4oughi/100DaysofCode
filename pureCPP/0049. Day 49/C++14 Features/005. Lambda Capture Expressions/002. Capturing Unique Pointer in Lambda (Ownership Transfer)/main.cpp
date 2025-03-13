#include <iostream>
#include <memory>

int main() {
    auto uptr = std::make_unique<int>(42);

    auto lambda = [p = std::move(uptr)]() {
        std::cout << "Captured Unique Pointer Value: " << *p << std::endl;
    };

    lambda(); // Output: Captured Unique Pointer Value: 42
    // uptr is now empty, cannot be accessed

    return 0;
}
