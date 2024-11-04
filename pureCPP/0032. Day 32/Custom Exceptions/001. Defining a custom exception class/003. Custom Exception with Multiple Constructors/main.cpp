#include <iostream>
#include <exception>
#include <string>

class MyException : public std::exception {
private:
    std::string message;
public:
    // Default constructor
    MyException() : message("Default MyException occurred!") {}
    
    // Constructor with a custom message
    MyException(const std::string& msg) : message(msg) {}

    const char* what() const noexcept override {
        return message.c_str();
    }
};

int main() {
    try {
        throw MyException();
    } catch (const MyException& e) {
        std::cout << e.what() << std::endl;
    }
    
    try {
        throw MyException("Custom message in second throw!");
    } catch (const MyException& e) {
        std::cout << e.what() << std::endl;
    }
    
    return 0;
}
