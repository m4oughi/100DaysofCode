#include <iostream>
#include <array>

// Compile-time Fibonacci sequence generation
constexpr std::array<int, 5> generateFibonacci() {
    return {0, 1, 1, 2, 3};  // Computed at compile-time
}

int main() {
    constexpr std::array<int, 5> fib = generateFibonacci();
    for (int num : fib) {
        std::cout << num << " ";
    }
}
