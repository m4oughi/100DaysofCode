#include <iostream>

constexpr int square(int x) {
    return x * x;
}

int main() {
    constexpr int value = square(5);  // ✅ Computed at compile-time
    std::cout << "Square: " << value << '\n';
}
