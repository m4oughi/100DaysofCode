#include <iostream>

consteval bool is_prime(int n, int divisor = 2) {
    return (n < 2) ? false :
           (divisor * divisor > n) ? true :
           (n % divisor == 0) ? false :
           is_prime(n, divisor + 1);
}

int main() {
    constexpr bool result = is_prime(19);
    std::cout << "Is 19 prime? " << (result ? "Yes" : "No") << '\n';
    return 0;
}
