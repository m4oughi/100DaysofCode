#include <iostream>
#include <exception>
#include <string>
#include <sstream>

class MyException : public std::exception {
private:
    std::string message;
    int errorCode;
public:
    MyException(const std::string& msg, int code) 
        : message(msg), errorCode(code) {}

    const char* what() const noexcept override {
        std::ostringstream oss;
        oss << message << " (Error Code: " << errorCode << ")";
        return oss.str().c_str();
    }
};

int main() {
    try {
        throw MyException("An error occurred", 404);
    } catch (const MyException& e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
