#include <iostream>

int main() {
    // Recursive lambda needs explicit type to refer to itself
    std::function<int(int)> factorial = [&](int n) {
        if (n <= 1)
            return 1;
        else
            return n * factorial(n - 1);
    };

    std::cout << "Factorial of 5: " << factorial(5) << std::endl;
    return 0;
}
