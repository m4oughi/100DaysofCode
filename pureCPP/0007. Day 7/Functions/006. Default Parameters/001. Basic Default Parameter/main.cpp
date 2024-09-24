#include <iostream>

// Function declaration with default parameter
void greet(std::string name = "Guest");

int main() {
    greet();             // Uses default value
    greet("Alice");      // Passes argument
    return 0;
}

// Function definition with default parameter
void greet(std::string name) {
    std::cout << "Hello, " << name << "!" << std::endl;
}
