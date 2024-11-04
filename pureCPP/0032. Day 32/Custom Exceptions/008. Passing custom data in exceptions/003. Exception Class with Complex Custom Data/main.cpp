#include <iostream>
#include <exception>
#include <string>

struct ErrorInfo {
    int errorCode;
    std::string errorMessage;
};

class ComplexException : public std::exception {
private:
    ErrorInfo errorInfo;
public:
    ComplexException(int code, const std::string& msg) {
        errorInfo.errorCode = code;
        errorInfo.errorMessage = msg;
    }

    const ErrorInfo& getErrorInfo() const {
        return errorInfo;
    }

    const char* what() const noexcept override {
        return "Complex error occurred!";
    }
};

int main() {
    try {
        throw ComplexException(401, "Unauthorized Access");
    } catch (const ComplexException& e) {
        const ErrorInfo& info = e.getErrorInfo();
        std::cout << e.what() << std::endl;
        std::cout << "Error Code: " << info.errorCode << ", Message: " << info.errorMessage << std::endl;
    }
    return 0;
}
