#include <iostream>
#include <type_traits>

template <typename T>
void printValue(T value) {
    if constexpr (std::is_arithmetic_v<T>) {
        std::cout << "Arithmetic value: " << value << '\n';
    } else {
        std::cout << "Non-arithmetic value: " << value << '\n';
    }
}

int main() {
    printValue(42);       // Output: Arithmetic value: 42
    printValue(3.14);     // Output: Arithmetic value: 3.14
    printValue("Test");   // Output: Non-arithmetic value: Test
    return 0;
}
