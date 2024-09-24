#include <iostream>

// Inline function with complex logic (not recommended)
inline bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    std::cout << "Is 29 prime? " << (isPrime(29) ? "Yes" : "No") << std::endl; // Output: Yes
    return 0;
}
