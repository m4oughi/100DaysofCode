#include <iostream>
#include <exception>
#include <string>

class MyException : public std::exception {
private:
    std::string message;
public:
    MyException(const std::string& msg) : message(msg) {}
    
    const char* what() const noexcept override {
        return message.c_str();
    }
};

int main() {
    try {
        throw MyException("Custom error message!");
    } catch (const MyException& e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
