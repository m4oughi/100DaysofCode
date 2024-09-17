#include <iostream>

// Function declaration with multiple parameters
int add(int a, int b);

int main() {
    int result = add(3, 4);  // Function call with multiple arguments
    std::cout << "Sum: " << result << std::endl;
    return 0;
}

// Function definition with multiple parameters
int add(int a, int b) {
    return a + b;
}
