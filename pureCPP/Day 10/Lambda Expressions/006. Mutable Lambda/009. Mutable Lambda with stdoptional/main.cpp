#include <iostream>
#include <optional>

int main() {
    auto optionalIncrement = [value = std::optional<int>{}]() mutable {
        if (!value) value = 0; // Initialize value if not set
        *value += 1; // Increment value
        return value;
    };

    std::cout << "Increment 1: " << *optionalIncrement() << std::endl; // Outputs: Increment 1: 1
    std::cout << "Increment 2: " << *optionalIncrement() << std::endl; // Outputs: Increment 2: 2
    std::cout << "Increment 3: " << *optionalIncrement() << std::endl; // Outputs: Increment 3: 3
    return 0;
}
