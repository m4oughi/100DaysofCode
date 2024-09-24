#include <iostream>

// Inline function defined at global scope
inline static int addStatic(int a, int b) {
    return a + b;
}

int main() {
    std::cout << "addStatic(3, 4): " << addStatic(3, 4) << std::endl; // Output: 7
    std::cout << "addStatic(10, 20): " << addStatic(10, 20) << std::endl; // Output: 30
    return 0;
}
