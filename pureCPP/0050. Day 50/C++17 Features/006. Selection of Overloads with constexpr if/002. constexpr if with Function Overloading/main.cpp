#include <iostream>

template <typename T>
void process(T value) {
    if constexpr (std::is_same_v<T, int>) {
        std::cout << "Processing integer: " << value << '\n';
    } else if constexpr (std::is_same_v<T, double>) {
        std::cout << "Processing double: " << value << '\n';
    } else {
        std::cout << "Unknown type\n";
    }
}

int main() {
    process(42);      // Output: Processing integer: 42
    process(3.14);    // Output: Processing double: 3.14
    process("Hello"); // Output: Unknown type
    return 0;
}
