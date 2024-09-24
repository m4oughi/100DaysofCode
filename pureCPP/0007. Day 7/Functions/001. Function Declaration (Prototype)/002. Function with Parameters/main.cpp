#include <iostream>

// Function declaration (prototype)
void greet(std::string name);

int main() {
    greet("Alice");  // Function call with argument
    return 0;
}

// Function definition
void greet(std::string name) {
    std::cout << "Hello, " << name << "!" << std::endl;
}
