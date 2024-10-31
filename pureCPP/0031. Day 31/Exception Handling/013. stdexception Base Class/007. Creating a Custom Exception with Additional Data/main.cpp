#include <iostream>
#include <exception>
#include <string>

class DetailedException : public std::exception {
    std::string message;
    int errorCode;
public:
    DetailedException(const std::string& msg, int code) : message(msg), errorCode(code) {}
    const char* what() const noexcept override {
        return message.c_str();
    }
    int getErrorCode() const { return errorCode; }
};

int main() {
    try {
        throw DetailedException("Error with code", 404);
    } catch (const DetailedException& e) {
        std::cout << "Caught DetailedException: " << e.what() << ", Code: " << e.getErrorCode() << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Caught std::exception: " << e.what() << std::endl;
    }
    return 0;
}
