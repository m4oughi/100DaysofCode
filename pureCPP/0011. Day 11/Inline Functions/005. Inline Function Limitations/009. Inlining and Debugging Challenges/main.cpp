#include <iostream>

// Inline function with a bug
inline int divide(int a, int b) {
    if (b == 0) {
        std::cerr << "Error: Division by zero!" << std::endl;
        return 0;
    }
    return a / b;
}

int main() {
    std::cout << "Result: " << divide(10, 0) << std::endl; // Error: Division by zero!
    return 0;
}
