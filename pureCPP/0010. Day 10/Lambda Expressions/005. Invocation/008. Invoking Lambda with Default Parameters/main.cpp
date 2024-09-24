#include <iostream>

int main() {
    // Lambda with default parameters
    auto greet = [](std::string name = "User") {
        std::cout << "Hello, " << name << "!" << std::endl;
    };
    greet();                 // Outputs: Hello, User!
    greet("Alice"); // Outputs: Hello, Alice!
    return 0;
}
