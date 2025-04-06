#include <iostream>

constexpr int square(int x) {
    return x * x;
}

int main() {
    constexpr int result1 = square(5); // ✅ Compile-time evaluation
    int n;
    std::cin >> n;
    int result2 = square(n); // ✅ Runtime evaluation (allowed)

    std::cout << "Compile-time: " << result1 << '\n';
    std::cout << "Runtime: " << result2 << '\n';
}
