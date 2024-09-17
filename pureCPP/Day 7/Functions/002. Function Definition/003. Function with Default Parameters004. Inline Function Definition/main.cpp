#include <iostream>

// Function declaration
void greet(std::string name = "Guest");

int main() {
    greet();              // Function call without argument
    greet("Alice");        // Function call with argument
    return 0;
}

// Function definition with default parameters
void greet(std::string name) {
    std::cout << "Hello, " << name << "!" << std::endl;
}
