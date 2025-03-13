#include <iostream>
#include <memory>

int main() {
    auto ptr = std::make_unique<int>(100);

    auto lambda = [p = std::move(ptr)]() {
        std::cout << "Unique Pointer Value: " << *p << std::endl;
    };

    lambda(); // Output: Unique Pointer Value: 100
    // ptr is now empty

    return 0;
}
