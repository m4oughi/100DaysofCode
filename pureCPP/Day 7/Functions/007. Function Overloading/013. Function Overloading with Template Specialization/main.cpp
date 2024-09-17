#include <iostream>

// Generic template function
template <typename T>
void print(T value) {
    std::cout << "Generic value: " << value << std::endl;
}

// Specialized version for int
template <>
void print<int>(int value) {
    std::cout << "Integer value: " << value << std::endl;
}

int main() {
    print(10);              // Calls specialized version
    print(3.14);            // Calls generic version
    return 0;
}
