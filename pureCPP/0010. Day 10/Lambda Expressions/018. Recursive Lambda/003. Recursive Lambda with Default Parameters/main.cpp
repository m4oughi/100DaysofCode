#include <iostream>
#include <functional>

int main() {
    std::function<int(int, int)> gcd = [&](int a, int b) -> int {
        return b == 0 ? a : gcd(b, a % b);
    };

    std::cout << "GCD of 48 and 18: " << gcd(48, 18) << std::endl; // Outputs: 6
    return 0;
}
