#include <iostream>

inline int factorial(int n) {
    if (n <= 1)
        return 1;
    else
        return n * factorial(n - 1);  // Recursion
}

int main() {
    std::cout << "Factorial of 5: " << factorial(5) << std::endl;
    return 0;
}
