#include <iostream>
#include <string>

int main() {
    std::string message = "Hello";
    auto appendMessage = [&message]() {
        message += ", World!";
    };

    appendMessage();
    std::cout << "Modified message: " << message << std::endl; // Outputs: Modified message: Hello, World!
    return 0;
}
