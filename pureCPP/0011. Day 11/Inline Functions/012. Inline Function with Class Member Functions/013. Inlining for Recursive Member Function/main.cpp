#include <iostream>

class Factorial {
public:
    // Recursive inline function to calculate factorial
    inline int calculate(int n) {
        return (n <= 1) ? 1 : n * calculate(n - 1);
    }
};

int main() {
    Factorial fact;
    std::cout << "Factorial of 5: " << fact.calculate(5) << std::endl; // Output: Factorial of 5: 120
    return 0;
}
