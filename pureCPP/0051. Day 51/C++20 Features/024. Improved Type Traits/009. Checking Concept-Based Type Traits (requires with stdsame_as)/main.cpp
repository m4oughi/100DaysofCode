#include <iostream>
#include <concepts>
#include <type_traits>

template <typename T>
requires std::same_as<T, int> || std::same_as<T, double>
void checkType(T value) {
    std::cout << "Value: " << value << "\n";
}

int main() {
    checkType(42);    // OK
    checkType(3.14);  // OK
    // checkType("Hello"); // Error: Not int or double
    return 0;
}
