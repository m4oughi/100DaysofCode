#include <iostream>

// A simple function that takes two integers and returns their difference
int subtract(int a, int b) {
    return a - b;
}

int add(int a, int b) {
    return a + b;
}

int main() {
    // Declare a function pointer
    int (*funcPtr)(int, int);

    // Assign the function pointer to 'add'
    funcPtr = add;
    std::cout << "Addition: " << funcPtr(5, 3) << std::endl;  // Output: Addition: 8

    // Reassign the function pointer to 'subtract'
    funcPtr = subtract;
    std::cout << "Subtraction: " << funcPtr(5, 3) << std::endl;  // Output: Subtraction: 2

    return 0;
}
