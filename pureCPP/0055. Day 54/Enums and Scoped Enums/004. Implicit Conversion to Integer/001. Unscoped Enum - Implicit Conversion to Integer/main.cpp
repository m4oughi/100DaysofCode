#include <iostream>

enum Color { Red, Green, Blue }; // Unscoped enum

int main() {
    Color c = Green;
    int value = c;  // Implicit conversion to int
    std::cout << "Green as int: " << value << std::endl;
}
