#include <iostream>
#include <concepts>

// Define a concept that ensures T is an integral type
template <typename T>
concept Integral = std::is_integral_v<T>;

// Function constrained by the Integral concept
void printIntegral(Integral auto value) {
    std::cout << "Value: " << value << '\n';
}

int main() {
    printIntegral(42);  // ✅ Works
    // printIntegral(3.14);  // ❌ Compilation Error: double is not Integral
}
