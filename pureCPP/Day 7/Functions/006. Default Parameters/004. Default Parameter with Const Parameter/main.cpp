#include <iostream>

// Function declaration with const and default parameter
void showMessage(const std::string& message = "Welcome to the program!");

int main() {
    showMessage();                    // Uses default message
    showMessage("Goodbye!");           // Passes custom message
    return 0;
}

// Function definition with const and default parameter
void showMessage(const std::string& message) {
    std::cout << message << std::endl;
}
