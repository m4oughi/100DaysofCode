#include <iostream>

// Template function declaration
template <typename T>
T maximum(T a, T b);

int main() {
    std::cout << maximum(3, 7) << std::endl;        // Call with int
    std::cout << maximum(3.5, 2.7) << std::endl;    // Call with double
    std::cout << maximum('a', 'z') << std::endl;    // Call with char
    return 0;
}

// Template function definition
template <typename T>
T maximum(T a, T b) {
    return (a > b) ? a : b;
}
