#include <iostream>
#include <exception>
#include <string>

class FlexibleException : public std::exception {
private:
    std::string message;
public:
    FlexibleException(const std::string& msg) : message(msg) {
        std::cout << "FlexibleException parameterized constructor called." << std::endl;
    }

    FlexibleException(const FlexibleException& other) : message(other.message) {
        std::cout << "FlexibleException copy constructor called." << std::endl;
    }

    const char* what() const noexcept override {
        return message.c_str();
    }
};

void generateError() {
    throw FlexibleException("Error from generateError");
}

int main() {
    try {
        generateError();
    } catch (const FlexibleException& e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
