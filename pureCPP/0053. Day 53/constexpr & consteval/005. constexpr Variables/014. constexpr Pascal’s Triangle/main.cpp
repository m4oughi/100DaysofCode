#include <iostream>

constexpr int binomialCoefficient(int n, int k) {
    return (k == 0 || k == n) ? 1 : binomialCoefficient(n - 1, k - 1) + binomialCoefficient(n - 1, k);
}

constexpr int result = binomialCoefficient(5, 2);

int main() {
    std::cout << "C(5,2): " << result << '\n';
    return 0;
}
