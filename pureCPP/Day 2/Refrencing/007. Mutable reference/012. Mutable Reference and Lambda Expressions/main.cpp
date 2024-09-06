#include <iostream>

int main() {
    int value = 10;
    auto modifyValue = [&value]() {  // Captures value by mutable reference
        value *= 3;
    };

    modifyValue();  // Modifies value
    std::cout << value << std::endl;  // Output: 30

    return 0;
}