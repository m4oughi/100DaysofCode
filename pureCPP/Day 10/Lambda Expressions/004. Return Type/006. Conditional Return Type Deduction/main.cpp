#include <iostream>

int main() {
    // Lambda with conditional return type deduction
    auto conditionalReturn = [](int n) {
        if (n > 0) 
            return n * 2; // Returns an int
        else 
            return -1.0;  // Returns a double
    };
    std::cout << "Result 1: " << conditionalReturn(5) << std::endl;  // Outputs: Result 1: 10
    std::cout << "Result 2: " << conditionalReturn(-3) << std::endl; // Outputs: Result 2: -1
    return 0;
}
