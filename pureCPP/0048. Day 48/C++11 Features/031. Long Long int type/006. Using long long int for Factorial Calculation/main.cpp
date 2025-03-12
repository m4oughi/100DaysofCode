#include <iostream>

long long int factorial(int n) {
    long long int result = 1;
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    int num = 20;
    std::cout << "Factorial of " << num << " is: " << factorial(num) << std::endl;
    return 0;
}
