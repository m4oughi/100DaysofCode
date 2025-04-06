#include <iostream>

constexpr int add(int a, int b) {
    return a + b;
}

int main() {
    constexpr int result1 = add(10, 20);  // ✅ Compile-time evaluation
    int x = 5, y = 10;
    int result2 = add(x, y);  // ✅ Runtime evaluation (allowed)

    std::cout << "Compile-time: " << result1 << '\n';
    std::cout << "Runtime: " << result2 << '\n';
    return 0;
}
