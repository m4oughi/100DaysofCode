#include <iostream>

int main() {
    auto counter = [count = 0]() mutable {
        return ++count;
    };

    std::cout << "First call: " << counter() << std::endl;  // Outputs: First call: 1
    std::cout << "Second call: " << counter() << std::endl; // Outputs: Second call: 2
    std::cout << "Third call: " << counter() << std::endl;  // Outputs: Third call: 3
    return 0;
}
