#include <iostream>

// Inline function to check if a number is positive
inline bool isPositive(int x) {
    return x > 0;
}

int main() {
    int number = -10;
    if (isPositive(number)) {
        std::cout << number << " is positive." << std::endl;
    } else {
        std::cout << number << " is not positive." << std::endl; // Output: -10 is not positive.
    }
    return 0;
}
