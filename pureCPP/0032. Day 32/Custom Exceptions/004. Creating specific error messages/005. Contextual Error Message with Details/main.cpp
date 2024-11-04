#include <iostream>
#include <exception>
#include <string>

class MathOperationException : public std::exception {
private:
    std::string message;
public:
    MathOperationException(const std::string& operation, const std::string& reason) {
        message = "Error: Failed to perform '" + operation + "' because " + reason;
    }

    const char* what() const noexcept override {
        return message.c_str();
    }
};

int main() {
    try {
        throw MathOperationException("square root", "input was negative");
    } catch (const MathOperationException& e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
