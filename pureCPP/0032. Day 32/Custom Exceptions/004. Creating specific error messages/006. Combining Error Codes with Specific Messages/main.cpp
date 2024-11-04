#include <iostream>
#include <exception>
#include <string>
#include <sstream>

class NetworkException : public std::exception {
private:
    std::string message;
    int errorCode;
public:
    NetworkException(const std::string& errorMessage, int code) 
        : message(errorMessage), errorCode(code) {}

    const char* what() const noexcept override {
        std::ostringstream oss;
        oss << message << " (Error Code: " << errorCode << ")";
        return oss.str().c_str();
    }
};

int main() {
    try {
        throw NetworkException("Connection failed", 101);
    } catch (const NetworkException& e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
