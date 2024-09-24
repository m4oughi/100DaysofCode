#include <iostream>

class Math {
public:
    // Static inline function as a class member
    static inline int factorial(int n) {
        int result = 1;
        for (int i = 1; i <= n; ++i) {
            result *= i;
        }
        return result;
    }
};

int main() {
    std::cout << "Factorial of 5: " << Math::factorial(5) << std::endl; // Output: 120
    return 0;
}
