#include <iostream>

// Inline function to return the square of a number
inline int square(int x) {
    return x * x;
}

int main() {
    const int value = square(5); // Compiler can optimize this to 25 at compile time
    std::cout << "Square of 5: " << value << std::endl; // Output: 25
    return 0;
}
