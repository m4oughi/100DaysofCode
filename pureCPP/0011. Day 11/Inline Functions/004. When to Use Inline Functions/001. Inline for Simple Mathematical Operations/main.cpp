#include <iostream>

// Inline function for a simple addition operation
inline int add(int a, int b) {
    return a + b;
}

int main() {
    std::cout << "Sum of 5 and 3: " << add(5, 3) << std::endl; // Output: Sum of 5 and 3: 8
    return 0;
}
