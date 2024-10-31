#include <iostream>
#include <string>

class MyException {
    std::string message;
public:
    MyException(const std::string& msg) : message(msg) {}
    const char* what() const {
        return message.c_str();
    }
};

int main() {
    try {
        throw MyException("This is a custom error message!");  // Throwing custom exception with message
    } catch (const MyException& e) {
        std::cout << "Caught: " << e.what() << std::endl;
    }
    return 0;
}
