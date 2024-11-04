#include <iostream>
#include <exception>
#include <string>

class InvalidArgumentException : public std::exception {
private:
    std::string message;
public:
    InvalidArgumentException(const std::string& msg) : message(msg) {
        std::cout << "InvalidArgumentException constructor called." << std::endl;
    }
    const char* what() const noexcept override {
        return message.c_str();
    }
};

int main() {
    try {
        throw InvalidArgumentException("Invalid argument provided!");
    } catch (const InvalidArgumentException& e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
