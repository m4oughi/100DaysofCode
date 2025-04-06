#include <iostream>

int main() {
    constexpr int a = 10; // Compile-time constant
    constexpr int b = a * 2; // Also a constant expression

    std::cout << "b: " << b << '\n';
    return 0;
}
