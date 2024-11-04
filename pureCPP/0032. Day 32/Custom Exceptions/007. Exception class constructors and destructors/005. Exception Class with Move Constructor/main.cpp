#include <iostream>
#include <exception>
#include <string>

class MoveableException : public std::exception {
private:
    std::string message;
public:
    MoveableException(const std::string& msg) : message(msg) {
        std::cout << "MoveableException constructor called." << std::endl;
    }
    
    MoveableException(MoveableException&& other) noexcept : message(std::move(other.message)) {
        std::cout << "Move constructor called." << std::endl;
    }

    const char* what() const noexcept override {
        return message.c_str();
    }
};

int main() {
    try {
        MoveableException ex("Moveable exception");
        throw std::move(ex);  // Will trigger move constructor
    } catch (const MoveableException& e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
