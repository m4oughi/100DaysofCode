#include <iostream>
#include <exception>
#include <string>

class DelegatedException : public std::exception {
private:
    std::string message;
public:
    DelegatedException() : DelegatedException("Default error") {
        std::cout << "DelegatedException default constructor called." << std::endl;
    }

    DelegatedException(const std::string& msg) : message(msg) {
        std::cout << "DelegatedException parameterized constructor called." << std::endl;
    }

    const char* what() const noexcept override {
        return message.c_str();
    }
};

int main() {
    try {
        throw DelegatedException();  // Calls default constructor
    } catch (const DelegatedException& e) {
        std::cout << e.what() << std::endl;
    }

    try {
        throw DelegatedException("Custom error message");  // Calls parameterized constructor
    } catch (const DelegatedException& e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
