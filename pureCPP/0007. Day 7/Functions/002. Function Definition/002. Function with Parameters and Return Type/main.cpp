#include <iostream>

// Function declaration
int multiply(int a, int b);

int main() {
    int result = multiply(4, 5);  // Function call
    std::cout << "Result: " << result << std::endl;
    return 0;
}

// Function definition with parameters and return type
int multiply(int a, int b) {
    return a * b;
}
