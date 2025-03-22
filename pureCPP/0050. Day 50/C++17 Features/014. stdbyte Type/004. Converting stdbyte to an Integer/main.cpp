#include <iostream>
#include <cstddef>

int main() {
    std::byte b{65}; // ASCII 'A'

    int value = std::to_integer<int>(b); // Convert to int

    std::cout << "Integer value of byte: " << value << '\n';
    return 0;
}
