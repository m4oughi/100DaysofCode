#include <iostream>
#include <string>

int main() {
    std::string message = "Hello, World!";
    // Lambda capturing and moving 'message'
    auto captureWithMove = [msg = std::move(message)]() mutable {
        std::cout << "Captured and moved message: " << msg << std::endl;
        msg = "Changed!";
    };
    captureWithMove(); // Outputs "Hello, World!"
    std::cout << "Original message: " << message << std::endl; // Outputs an empty string
    return 0;
}
