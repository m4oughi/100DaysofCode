#include <iostream>
#include <numbers>

int main() {
    int n = 10; // 10th Fibonacci number approximation
    double fibonacci_n = (std::pow(std::numbers::phi, n) - std::pow(1 - std::numbers::phi, n)) / std::sqrt(5);

    std::cout << "Approximate Fibonacci(10): " << fibonacci_n << "\n"; // Output: 55
    return 0;
}
