#include <iostream>
#include <exception>
#include <string>

class InvalidRangeException : public std::exception {
private:
    std::string message;
public:
    InvalidRangeException(int value, int min, int max) {
        message = "Error: Value " + std::to_string(value) + " is out of range (" + std::to_string(min) + " - " + std::to_string(max) + ").";
    }

    const char* what() const noexcept override {
        return message.c_str();
    }
};

void validateInput(int value, int min, int max) {
    if (value < min || value > max)
        throw InvalidRangeException(value, min, max);
}

int main() {
    try {
        validateInput(150, 1, 100);  // Value out of range
    } catch (const InvalidRangeException& e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
