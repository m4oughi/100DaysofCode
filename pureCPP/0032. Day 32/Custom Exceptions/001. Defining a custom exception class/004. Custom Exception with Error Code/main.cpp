#include <iostream>
#include <exception>
#include <string>

class MyException : public std::exception {
private:
    std::string message;
    int errorCode;
public:
    MyException(const std::string& msg, int code) : message(msg), errorCode(code) {}
    
    const char* what() const noexcept override {
        return message.c_str();
    }
    
    int code() const {
        return errorCode;
    }
};

int main() {
    try {
        throw MyException("Error occurred", 404);
    } catch (const MyException& e) {
        std::cout << e.what() << " - Error Code: " << e.code() << std::endl;
    }
    return 0;
}
