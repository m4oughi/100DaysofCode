#include <iostream>
#include <exception>

class InvalidInputException : public std::exception {
public:
    const char* what() const noexcept override {
        return "Invalid input provided!";
    }
};

void process(int value) {
    if (value < 0) {
        throw InvalidInputException();  // Throwing custom exception in function
    }
    std::cout << "Value: " << value << std::endl;
}

int main() {
    try {
        process(-5);  // Invalid input
    } catch (const InvalidInputException& e) {
        std::cout << "Caught: " << e.what() << std::endl;
    }
    return 0;
}
