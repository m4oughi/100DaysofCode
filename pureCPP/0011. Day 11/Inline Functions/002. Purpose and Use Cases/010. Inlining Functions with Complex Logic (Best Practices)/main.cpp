#include <iostream>

// Complex inline function with conditional logic and loops
inline bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    std::cout << "Is 13 prime? " << (isPrime(13) ? "Yes" : "No") << std::endl; // Output: Yes
    std::cout << "Is 25 prime? " << (isPrime(25) ? "Yes" : "No") << std::endl; // Output: No
    return 0;
}
