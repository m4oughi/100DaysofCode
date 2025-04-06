#include <iostream>

int main() {
    constexpr int compileTimeValue = 10;  // Initialized at compile-time
    std::cout << "constexpr variable: " << compileTimeValue << '\n';  // Compile-time evaluation
}
