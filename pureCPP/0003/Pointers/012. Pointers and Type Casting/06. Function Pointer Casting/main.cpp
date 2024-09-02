#include <iostream>

void printMessage() {
    std::cout << "Hello, world!" << std::endl;
}

int main() {
    void (*funcPtr)() = printMessage;
    
    // Reinterpret the function pointer as a different function signature
    void (*genericPtr)() = reinterpret_cast<void (*)()>(funcPtr);
    genericPtr();  // Output: Hello, world!

    return 0;
}
