#include <iostream>

// Function declaration
void displayMessage(std::string message = "Default Message");

int main() {
    displayMessage();                 // Call without arguments
    displayMessage("Hello, World!");   // Call with argument
    return 0;
}

// Function definition
void displayMessage(std::string message) {
    std::cout << message << std::endl;
}
