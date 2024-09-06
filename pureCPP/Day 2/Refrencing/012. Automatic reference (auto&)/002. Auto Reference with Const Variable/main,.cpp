#include <iostream>

int main() {
    const int value = 30;
    const auto& ref = value;  // auto& deduces that ref is a const l-value reference to value

    std::cout << ref << std::endl;  // Output: 30

    return 0;
}