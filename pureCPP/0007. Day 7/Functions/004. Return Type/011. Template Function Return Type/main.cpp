#include <iostream>

// Template function declaration
template <typename T>
T maximum(T a, T b);

int main() {
    std::cout << maximum(3, 7) << std::endl;      // Calls for int
    std::cout << maximum(2.5, 1.8) << std::endl;  // Calls for double
    return 0;
}

// Template function definition returning generic type
template <typename T>
T maximum(T a, T b) {
    return (a > b) ? a : b;
}
