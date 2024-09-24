#include <iostream>

// Function declaration
int multiply(int a, int b);

int main() {
    int result = multiply(4, 5);  // Function call with return value
    std::cout << "Result: " << result << std::endl;
    return 0;
}

// Function definition
int multiply(int a, int b) {
    return a * b;
}
