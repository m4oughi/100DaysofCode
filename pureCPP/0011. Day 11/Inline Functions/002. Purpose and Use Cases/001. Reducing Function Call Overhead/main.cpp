#include <iostream>

// Inline function to calculate the square of a number
inline int square(int x) {
    return x * x;
}

int main() {
    int result = square(5); // Direct substitution instead of function call
    std::cout << "Square of 5: " << result << std::endl; // Output: Square of 5: 25
    return 0;
}
