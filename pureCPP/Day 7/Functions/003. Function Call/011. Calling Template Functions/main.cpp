#include <iostream>

// Template function declaration
template <typename T>
T maximum(T a, T b);

int main() {
    std::cout << maximum(3, 7) << std::endl;           // Calls int version
    std::cout << maximum(2.5, 1.7) << std::endl;       // Calls double version
    return 0;
}

// Template function definition
template <typename T>
T maximum(T a, T b) {
    return (a > b) ? a : b;
}
