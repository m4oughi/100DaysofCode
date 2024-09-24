#include <iostream>

int main() {
    // Lambda with parameters and return type deduction
    auto add = [](int a, int b) {
        return a + b; // Return type is deduced as int
    };
    std::cout << "Sum: " << add(3, 4) << std::endl;
    return 0;
}
