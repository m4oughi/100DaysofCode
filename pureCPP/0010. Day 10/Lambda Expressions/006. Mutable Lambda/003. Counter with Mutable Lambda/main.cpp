#include <iostream>

int main() {
    auto counter = [count = 0]() mutable {
        return ++count; // Modifies the internal state 'count'
    };

    std::cout << "Count: " << counter() << std::endl; // Outputs: Count: 1
    std::cout << "Count: " << counter() << std::endl; // Outputs: Count: 2
    std::cout << "Count: " << counter() << std::endl; // Outputs: Count: 3
    return 0;
}
