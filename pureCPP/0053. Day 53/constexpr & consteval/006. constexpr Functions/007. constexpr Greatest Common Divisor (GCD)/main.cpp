#include <iostream>

constexpr int gcd(int a, int b) {
    return (b == 0) ? a : gcd(b, a % b);
}

constexpr int result = gcd(48, 18);

int main() {
    std::cout << "GCD of 48 and 18: " << result << '\n';
    return 0;
}
