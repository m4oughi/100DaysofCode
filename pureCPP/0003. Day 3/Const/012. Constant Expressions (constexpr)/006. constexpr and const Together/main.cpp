#include <iostream>

constexpr int add(int a, int b) {
    return a + b;
}

int main() {
    const int result = add(5, 10); // result is const, but not constexpr
    constexpr int constexprResult = add(7, 8); // Compile-time evaluation
    std::cout << result << " " << constexprResult << std::endl; // Prints 15 15

    return 0;
}