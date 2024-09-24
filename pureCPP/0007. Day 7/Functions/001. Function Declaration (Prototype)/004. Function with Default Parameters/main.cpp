#include <iostream>

// Function declaration (prototype)
void displayMessage(std::string message = "Default Message");

int main() {
    displayMessage();               // Call without argument
    displayMessage("Hello again!");  // Call with argument
    return 0;
}

// Function definition
void displayMessage(std::string message) {
    std::cout << message << std::endl;
}
