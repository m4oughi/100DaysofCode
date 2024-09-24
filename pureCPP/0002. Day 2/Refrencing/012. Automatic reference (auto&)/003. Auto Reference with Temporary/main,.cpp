#include <iostream>

int main() {
    auto&& ref = 40;  // auto&& deduces that ref is an r-value reference to the temporary

    std::cout << ref << std::endl;  // Output: 40

    return 0;
}