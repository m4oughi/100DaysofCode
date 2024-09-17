#include <iostream>

// Function declaration with parameters
void greet(std::string name);

int main() {
    greet("Alice");  // Function call with argument
    return 0;
}

// Function definition with parameter
void greet(std::string name) {
    std::cout << "Hello, " << name << "!" << std::endl;
}
