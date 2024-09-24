#include <iostream>

// Inline function with a small yet non-trivial logic
inline bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    for (int i = 1; i <= 10; ++i) {
        std::cout << i << (isPrime(i) ? " is a prime number." : " is not a prime number.") << std::endl;
    }
    return 0;
}
