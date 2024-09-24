#include <iostream>

int main() {
    int value = 10;
    auto& ref = value;  // auto& deduces that ref is an l-value reference to value

    ref = 20;  // Modify the original variable
    std::cout << value << std::endl;  // Output: 20

    return 0;
}