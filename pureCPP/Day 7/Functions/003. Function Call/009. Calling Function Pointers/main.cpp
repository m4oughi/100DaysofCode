#include <iostream>

// Function declaration
int add(int a, int b);

int main() {
    int (*funcPtr)(int, int);  // Function pointer declaration
    funcPtr = add;  // Assign function to pointer
    
    std::cout << funcPtr(3, 4) << std::endl;  // Function call via pointer
    return 0;
}

// Function definition
int add(int a, int b) {
    return a + b;
}
