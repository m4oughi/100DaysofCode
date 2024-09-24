#include <iostream>

// Inline function declaration
inline int square(int x);

int main() {
    std::cout << square(5) << std::endl;  // Function call to inline function
    return 0;
}

// Inline function definition
inline int square(int x) {
    return x * x;
}
