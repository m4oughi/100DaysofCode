#include <iostream>

// Overloaded functions with const and non-const parameters
void showMessage(std::string& message) {
    std::cout << "Non-const message: " << message << std::endl;
}

void showMessage(const std::string& message) {
    std::cout << "Const message: " << message << std::endl;
}

int main() {
    std::string msg = "Hello";
    showMessage(msg);                  // Calls non-const version

    const std::string constMsg = "Hi";
    showMessage(constMsg);             // Calls const version
    return 0;
}
