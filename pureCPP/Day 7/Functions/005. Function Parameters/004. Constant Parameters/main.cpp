#include <iostream>

// Function declaration with const parameter
void display(const std::string& message);

int main() {
    std::string msg = "This message can't be changed.";
    display(msg);  // Function call with const parameter
    return 0;
}

// Function definition with const parameter
void display(const std::string& message) {
    std::cout << message << std::endl;
    // message = "Changed!";  // Error: can't modify a const parameter
}
