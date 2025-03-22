#include <iostream>

template <typename T>
void checkType(T value) {
    if constexpr (std::is_integral_v<T>) {
        std::cout << "Integer type\n";
    } else {
        std::cout << "Non-integer type\n";
    }
}

int main() {
    checkType(10);      // Output: Integer type
    checkType(3.14);    // Output: Non-integer type
    return 0;
}
