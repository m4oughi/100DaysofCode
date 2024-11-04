#include <iostream>
#include <stdexcept>

class MyComplexError : public std::runtime_error {
private:
    int errorCode;
public:
    MyComplexError(const std::string& msg, int code) 
        : std::runtime_error(msg), errorCode(code) {}

    int getCode() const {
        return errorCode;
    }
};

int main() {
    try {
        throw MyComplexError("Complex error occurred", 500);
    } catch (const MyComplexError& e) {
        std::cout << e.what() << " - Error Code: " << e.getCode() << std::endl;
    }
    return 0;
}
