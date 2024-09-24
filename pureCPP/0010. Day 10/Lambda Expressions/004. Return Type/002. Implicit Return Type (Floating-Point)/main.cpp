#include <iostream>

int main() {
    // Lambda with implicit return type (double)
    auto divide = [](double a, double b) {
        return a / b; // Return type is deduced as double
    };
    std::cout << "Result: " << divide(7.0, 2.0) << std::endl; // Outputs: Result: 3.5
    return 0;
}
