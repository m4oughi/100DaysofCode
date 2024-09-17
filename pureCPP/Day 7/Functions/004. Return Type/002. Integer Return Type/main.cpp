#include <iostream>

// Function declaration with int return type
int add(int a, int b);

int main() {
    int sum = add(3, 5);  // Function call, store returned value
    std::cout << "Sum: " << sum << std::endl;
    return 0;
}

// Function definition with int return type
int add(int a, int b) {
    return a + b;  // Returns the sum of two integers
}
