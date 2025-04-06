#include <iostream>

// Compile-time prime checking
consteval bool isPrime(int num, int i = 2) {
    if (num <= 1) return false;
    if (i * i > num) return true;
    if (num % i == 0) return false;
    return isPrime(num, i + 1);
}

int main() {
    constexpr bool prime7 = isPrime(7);  // Computed at compile-time
    std::cout << "Is 7 prime? " << (prime7 ? "Yes" : "No") << '\n';
}
