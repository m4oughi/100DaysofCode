#include <iostream>
#include <stdexcept>
#include <functional>

class LambdaException : public std::runtime_error {
public:
    std::function<void()> handler;
    LambdaException(const std::string& message, std::function<void()> handler)
        : std::runtime_error(message), handler(handler) {}
};

int main() {
    try {
        throw LambdaException("Custom exception with handler", []() {
            std::cout << "Executing custom handler!" << std::endl;
        });
    } catch (const LambdaException& e) {
        std::cout << "Caught exception: " << e.what() << std::endl; // Outputs: Caught exception: Custom exception with handler
        e.handler(); // Outputs: Executing custom handler!
    }

    return 0;
}
