#include <iostream>
#include <cstddef> // For std::byte

int main() {
    std::byte b1{42};  // Initialize with an integer value
    std::byte b2 = std::byte{10}; // Another way to initialize

    std::cout << "Byte values initialized successfully!\n";
    return 0;
}
