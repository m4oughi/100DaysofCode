#include <iostream>

// Inline function declaration
inline int even(int n);

// Inline function for odd numbers
inline int odd(int n) {
    if (n == 0) return 0; // Base case
    return even(n - 1); // Recursive call to even()
}

// Inline function for even numbers
inline int even(int n) {
    if (n == 0) return 1; // Base case
    return odd(n - 1); // Recursive call to odd()
}

int main() {
    int number = 5;
    if (odd(number))
        std::cout << number << " is odd" << std::endl; // Output: 5 is odd
    else
        std::cout << number << " is even" << std::endl;

    return 0;
}
