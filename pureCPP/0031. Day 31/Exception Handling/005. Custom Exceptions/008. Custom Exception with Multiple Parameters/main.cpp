#include <iostream>
#include <exception>

class ComplexException : public std::exception {
    std::string errorMessage;
    int errorCode;
public:
    ComplexException(const std::string& msg, int code) : errorMessage(msg), errorCode(code) {}
    const char* what() const noexcept override {
        return errorMessage.c_str();
    }
    int getCode() const { return errorCode; }
};

int main() {
    try {
        throw ComplexException("Custom error occurred", 500);  // Throwing custom exception with multiple parameters
    } catch (const ComplexException& e) {
        std::cout << "Caught: " << e.what() << " (Code: " << e.getCode() << ")" << std::endl;
    }
    return 0;
}
