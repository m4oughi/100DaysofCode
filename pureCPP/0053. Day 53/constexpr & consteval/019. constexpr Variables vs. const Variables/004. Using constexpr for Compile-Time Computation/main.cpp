#include <iostream>

constexpr int calculate() {
    return 20 + 5;  // Computed at compile-time
}

int main() {
    constexpr int compileTimeComputation = calculate();  // Computed at compile-time
    std::cout << "constexpr variable from compile-time computation: " << compileTimeComputation << '\n';
}
