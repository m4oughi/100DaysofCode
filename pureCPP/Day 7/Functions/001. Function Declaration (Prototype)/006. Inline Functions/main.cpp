#include <iostream>

// Function declaration (prototype) with inline keyword
inline int square(int x);

int main() {
    std::cout << square(5) << std::endl;  // Inline function call
    return 0;
}

// Function definition
inline int square(int x) {
    return x * x;
}
