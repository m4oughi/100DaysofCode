#include <iostream>

// Function to be pointed to
void hello() {
    std::cout << "Hello, Function Pointer!" << std::endl;
}

int main() {
    void (*funcPtr)() = hello;  // Declare and initialize function pointer
    funcPtr();  // Call function via pointer
    return 0;
}
