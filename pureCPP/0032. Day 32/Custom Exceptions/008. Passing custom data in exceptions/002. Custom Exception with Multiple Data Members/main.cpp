#include <iostream>
#include <exception>
#include <string>

class DetailedException : public std::exception {
private:
    int errorCode;
    std::string errorMsg;
public:
    DetailedException(int code, const std::string& msg) : errorCode(code), errorMsg(msg) {}

    int getErrorCode() const {
        return errorCode;
    }

    const char* getErrorMessage() const {
        return errorMsg.c_str();
    }

    const char* what() const noexcept override {
        return "Detailed error occurred!";
    }
};

int main() {
    try {
        throw DetailedException(500, "Internal Server Error");
    } catch (const DetailedException& e) {
        std::cout << e.what() << std::endl;
        std::cout << "Error Code: " << e.getErrorCode() << ", Message: " << e.getErrorMessage() << std::endl;
    }
    return 0;
}
