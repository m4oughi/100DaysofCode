#include <iostream>
#include <string>

int main() {
    std::string message = "Hello, Lambda!";
    auto printMessage = [message]() {
        std::cout << "Captured message: " << message << std::endl;
    };

    message = "Changed Message";
    printMessage(); // Outputs: Captured message: Hello, Lambda!
    return 0;
}
