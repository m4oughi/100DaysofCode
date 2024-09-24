#include <iostream>

// Function declaration with void return type
void sayHello();

int main() {
    sayHello();  // Function call
    return 0;
}

// Function definition with void return type (no value returned)
void sayHello() {
    std::cout << "Hello, World!" << std::endl;
}
