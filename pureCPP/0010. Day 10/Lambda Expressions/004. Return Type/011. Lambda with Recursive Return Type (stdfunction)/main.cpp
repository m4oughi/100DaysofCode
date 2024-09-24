#include <iostream>
#include <functional>

int main() {
    // Recursive lambda with std::function
    std::function<int(int)> factorial = [&](int n) -> int {
        return (n <= 1) ? 1 : n * factorial(n - 1);
    };
    std::cout << "Factorial of 5: " << factorial(5) << std::endl; // Outputs: Factorial of 5: 120
    return 0;
}
