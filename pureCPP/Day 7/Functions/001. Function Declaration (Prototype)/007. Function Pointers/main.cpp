#include <iostream>

// Function declaration (prototype)
int multiply(int a, int b);

int main() {
    int (*funcPtr)(int, int);  // Declaring a function pointer
    funcPtr = &multiply;       // Assigning function to pointer
    std::cout << funcPtr(3, 4) << std::endl;  // Calling function via pointer
    return 0;
}

// Function definition
int multiply(int a, int b) {
    return a * b;
}
