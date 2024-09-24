#include <iostream>

// Static inline function defined in a single translation unit
static inline int add(int a, int b) {
    return a + b;
}

int main() {
    std::cout << "Sum: " << add(5, 3) << std::endl; // Output: Sum: 8
    return 0;
}
