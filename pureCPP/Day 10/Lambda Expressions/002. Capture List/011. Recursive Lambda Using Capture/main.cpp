#include <iostream>

int main() {
    int factorial = 1;
    // Recursive lambda capturing itself by reference
    auto factorialLambda = [&](int n) {
        if (n <= 1)
            return factorial;
        factorial *= n;
        return factorialLambda(n - 1);
    };
    int result = factorialLambda(5); // Calculates 5!
    std::cout << "Factorial of 5 is " << result << std::endl; // Outputs 120
    return 0;
}
