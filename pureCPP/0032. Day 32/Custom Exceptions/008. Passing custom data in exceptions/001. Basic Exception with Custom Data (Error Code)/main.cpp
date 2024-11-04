#include <iostream>
#include <exception>

class ErrorCodeException : public std::exception {
private:
    int errorCode;
public:
    ErrorCodeException(int code) : errorCode(code) {}

    int getErrorCode() const {
        return errorCode;
    }

    const char* what() const noexcept override {
        return "Error occurred!";
    }
};

int main() {
    try {
        throw ErrorCodeException(404);
    } catch (const ErrorCodeException& e) {
        std::cout << e.what() << " Error code: " << e.getErrorCode() << std::endl;
    }
    return 0;
}
