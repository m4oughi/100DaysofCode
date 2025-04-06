#include <iostream>

consteval bool is_prime(int n, int i = 2) {
    return (n <= 2) ? (n == 2) : (i * i > n) ? true : (n % i == 0) ? false : is_prime(n, i + 1);
}

int main() {
    constexpr bool primeCheck = is_prime(19);
    std::cout << "Is 19 prime? " << (primeCheck ? "Yes" : "No") << '\n';
    return 0;
}
