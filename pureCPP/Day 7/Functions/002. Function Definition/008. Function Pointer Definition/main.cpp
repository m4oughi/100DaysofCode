#include <iostream>

// Function declaration
int add(int a, int b);

int main() {
    int (*funcPtr)(int, int) = add;  // Function pointer assignment
    std::cout << funcPtr(3, 4) << std::endl;  // Function call via pointer
    return 0;
}

// Function definition for use with function pointer
int add(int a, int b) {
    return a + b;
}
