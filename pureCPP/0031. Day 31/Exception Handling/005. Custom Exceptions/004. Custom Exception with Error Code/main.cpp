#include <iostream>
#include <exception>

class MyException : public std::exception {
    int errorCode;
public:
    MyException(const char* message, int code) : std::exception(message), errorCode(code) {}
    int getErrorCode() const { return errorCode; }
};

int main() {
    try {
        throw MyException("Custom exception with error code", 404);  // Throwing custom exception with error code
    } catch (const MyException& e) {
        std::cout << "Caught: " << e.what() << " (Error code: " << e.getErrorCode() << ")" << std::endl;
    }
    return 0;
}
