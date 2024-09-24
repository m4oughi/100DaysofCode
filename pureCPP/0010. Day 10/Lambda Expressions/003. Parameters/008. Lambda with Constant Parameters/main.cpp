#include <iostream>

int main() {
    // Lambda with constant parameters
    auto printSum = [](const int a, const int b) {
        std::cout << "Sum of constant parameters: " << a + b << std::endl;
    };
    printSum(5, 7);
    return 0;
}
