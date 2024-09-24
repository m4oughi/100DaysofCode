#include <iostream>

int main() {
    // Lambda invocation with parameters
    auto add = [](int a, int b) {
        return a + b;
    };
    std::cout << "Sum: " << add(3, 4) << std::endl; // Outputs: Sum: 7
    return 0;
}
