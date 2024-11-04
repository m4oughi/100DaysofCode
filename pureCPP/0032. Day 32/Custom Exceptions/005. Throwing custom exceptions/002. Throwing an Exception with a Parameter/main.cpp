#include <iostream>
#include <exception>
#include <string>

class InvalidInputException : public std::exception {
private:
    std::string message;
public:
    InvalidInputException(const std::string& input) {
        message = "Error: Invalid input '" + input + "' provided.";
    }

    const char* what() const noexcept override {
        return message.c_str();
    }
};

int main() {
    try {
        throw InvalidInputException("abc123");
    } catch (const InvalidInputException& e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
