#include <iostream>

// Template function declaration
template <typename T>
T maximum(T a, T b);

int main() {
    std::cout << maximum(3, 7) << std::endl;      // Works with int
    std::cout << maximum(3.5, 2.1) << std::endl;  // Works with double
    return 0;
}

// Template function definition
template <typename T>
T maximum(T a, T b) {
    return (a > b) ? a : b;
}
