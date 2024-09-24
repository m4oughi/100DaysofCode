#include <iostream>
#include <chrono>

// Inline recursive function to calculate power
inline long long power(int base, int exp) {
    if (exp == 0) return 1; // Base case
    return base * power(base, exp - 1); // Recursive call
}

int main() {
    int base = 2, exp = 20;

    // Measure performance of recursive inline function
    auto start = std::chrono::high_resolution_clock::now();
    long long result = power(base, exp);
    auto end = std::chrono::high_resolution_clock::now();

    std::cout << base << "^" << exp << " = " << result << std::endl; // Output: 1048576
    std::cout << "Time taken: "
              << std::chrono::duration_cast<std::chrono::microseconds>(end - start).count()
              << " µs" << std::endl;

    return 0;
}
