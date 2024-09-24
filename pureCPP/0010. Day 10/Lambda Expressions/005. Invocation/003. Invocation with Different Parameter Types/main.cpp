#include <iostream>

int main() {
    // Lambda invocation with different parameter types
    auto concatenate = [](std::string a, int b) {
        return a + std::to_string(b);
    };
    std::cout << "Concatenation: " << concatenate("Number: ", 42) << std::endl; // Outputs: Concatenation: Number: 42
    return 0;
}
