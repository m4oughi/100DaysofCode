#include <iostream>

int main() {
    // Lambda with explicit return type (double)
    auto average = [](int a, int b) -> double {
        return (a + b) / 2.0; // Ensures return type is double
    };
    std::cout << "Average: " << average(5, 7) << std::endl; // Outputs: Average: 6
    return 0;
}
