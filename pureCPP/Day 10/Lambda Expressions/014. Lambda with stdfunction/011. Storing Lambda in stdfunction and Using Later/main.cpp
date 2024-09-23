#include <iostream>
#include <functional>

int main() {
    std::function<int(int, int)> operation;

    // Set the lambda
    operation = [](int a, int b) {
        return a - b;
    };

    std::cout << "Difference: " << operation(10, 4) << std::endl; // Outputs: Difference: 6

    // Change the lambda
    operation = [](int a, int b) {
        return a + b;
    };

    std::cout << "Sum: " << operation(10, 4) << std::endl; // Outputs: Sum: 14

    return 0;
}
