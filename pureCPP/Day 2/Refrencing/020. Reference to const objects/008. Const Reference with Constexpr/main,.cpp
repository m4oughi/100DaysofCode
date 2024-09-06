#include <iostream>

constexpr int getValue() {
    return 100;  // Constexpr function returns constant expression
}

int main() {
    const int& ref = getValue();  // Reference to constexpr value
    std::cout << "Constexpr value: " << ref << std::endl;  // Output: 100

    return 0;
}
