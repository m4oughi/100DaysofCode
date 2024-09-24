#include <iostream>
#include <functional>

int main() {
    // Define a recursive lambda to calculate Fibonacci numbers
    std::function<int(int)> fibonacci = [&](int n) {
        if (n <= 1) return n;
        return fibonacci(n - 1) + fibonacci(n - 2);
    };

    std::cout << "Fibonacci of 7: " << fibonacci(7) << std::endl; // Outputs: 13
    return 0;
}
