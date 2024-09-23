#include <iostream>

int main() {
    // Lambda with implicit return type
    auto add = [](int a, int b) {
        return a + b; // Return type is deduced as int
    };
    std::cout << "Sum: " << add(5, 3) << std::endl; // Outputs: Sum: 8
    return 0;
}
