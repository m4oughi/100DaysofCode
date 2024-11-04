#include <iostream>
#include <exception>
#include <string>

class CustomException : public std::exception {
protected:
    std::string message;
    int errorCode;
public:
    CustomException(const std::string& msg, int code) : message(msg), errorCode(code) {}
    virtual const char* what() const noexcept override {
        return message.c_str();
    }
    int getErrorCode() const { return errorCode; }
};

class FileException : public CustomException {
public:
    FileException(const std::string& msg, int code) : CustomException("File Error: " + msg, code) {}
};

class NetworkException : public CustomException {
public:
    NetworkException(const std::string& msg, int code) : CustomException("Network Error: " + msg, code) {}
};

int main() {
    try {
        throw NetworkException("Connection lost", 404);
    } catch (const CustomException& e) {
        std::cout << "Caught: " << e.what() << ", Error code: " << e.getErrorCode() << std::endl;
    }
    return 0;
}
