#include <iostream>
#include <exception>
#include <string>

class CopyableException : public std::exception {
private:
    std::string message;
public:
    CopyableException(const std::string& msg) : message(msg) {
        std::cout << "CopyableException constructor called." << std::endl;
    }
    
    CopyableException(const CopyableException& other) : message(other.message) {
        std::cout << "Copy constructor called." << std::endl;
    }

    const char* what() const noexcept override {
        return message.c_str();
    }
};

int main() {
    try {
        CopyableException ex("Copyable exception");
        throw ex;  // Will trigger copy constructor
    } catch (const CopyableException& e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
