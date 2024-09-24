#include <iostream>
#include <functional>

int main() {
    // Define a recursive lambda using std::function
    std::function<int(int)> factorial = [&](int n) {
        return n <= 1 ? 1 : n * factorial(n - 1);
    };

    std::cout << "Factorial of 5: " << factorial(5) << std::endl; // Outputs: 120
    return 0;
}
