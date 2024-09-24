#include <iostream>
#include <array>

int main() {
    std::array<std::string, 2> arr = {"Hello", "World"};
    auto [greeting, noun] = arr;  // Structured binding for non-primitive types
    std::cout << greeting << ", " << noun << "!" << std::endl;  // Output: Hello, World!


    return 0;
}