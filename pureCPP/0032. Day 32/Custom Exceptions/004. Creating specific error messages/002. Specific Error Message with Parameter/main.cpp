#include <iostream>
#include <exception>
#include <string>

class InvalidInputException : public std::exception {
private:
    std::string message;
public:
    InvalidInputException(int input) {
        message = "Error: Invalid input " + std::to_string(input);
    }

    const char* what() const noexcept override {
        return message.c_str();
    }
};

int main() {
    try {
        throw InvalidInputException(42);
    } catch (const InvalidInputException& e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
