#include <iostream>

// Function with arguments
int add(int a, int b) {
    return a + b;
}

int main() {
    int (*funcPtr)(int, int) = add;  // Declare and initialize function pointer
    std::cout << "Sum: " << funcPtr(3, 4) << std::endl;  // Call function via pointer
    return 0;
}
