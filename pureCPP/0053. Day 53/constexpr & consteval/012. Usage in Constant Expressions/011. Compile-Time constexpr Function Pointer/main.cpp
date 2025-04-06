#include <iostream>

constexpr int multiply(int a, int b) {
    return a * b;
}

int main() {
    constexpr auto funcPtr = multiply;  // ✅ Compile-time function pointer
    constexpr int result = funcPtr(5, 6);
    std::cout << "Multiply: " << result << '\n';
}
