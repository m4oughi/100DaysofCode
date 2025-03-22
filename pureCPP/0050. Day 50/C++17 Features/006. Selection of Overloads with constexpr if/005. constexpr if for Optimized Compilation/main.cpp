#include <iostream>

template <typename T>
void optimizeOperation(T value) {
    if constexpr (std::is_integral_v<T>) {
        std::cout << "Performing fast integer operation: " << value * 2 << '\n';
    } else {
        std::cout << "Performing generic operation\n";
    }
}

int main() {
    optimizeOperation(5);    // Output: Performing fast integer operation: 10
    optimizeOperation(3.14); // Output: Performing generic operation
    return 0;
}
