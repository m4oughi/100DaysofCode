#include <iostream>

// Inline function to calculate the cube of a number
inline int cube(int x) {
    return x * x * x;
}

int main() {
    int value = 3;
    // Using inline function for better readability instead of writing `value * value * value` directly
    std::cout << "Cube of 3: " << cube(value) << std::endl; // Output: Cube of 3: 27
    return 0;
}
