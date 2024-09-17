#include <iostream>

// Function declaration with default parameter
void displayMessage(std::string message = "Hello, World!");

int main() {
    displayMessage();                // Call without argument (default value used)
    displayMessage("Hi, there!");    // Call with argument
    return 0;
}

// Function definition with default parameter
void displayMessage(std::string message) {
    std::cout << message << std::endl;
}
