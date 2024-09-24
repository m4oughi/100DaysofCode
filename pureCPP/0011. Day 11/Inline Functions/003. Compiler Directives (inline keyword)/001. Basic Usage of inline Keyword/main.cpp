#include <iostream>

// Simple inline function to add two integers
inline int add(int a, int b) {
    return a + b;
}

int main() {
    std::cout << "Sum: " << add(5, 3) << std::endl; // Output: Sum: 8
    return 0;
}
