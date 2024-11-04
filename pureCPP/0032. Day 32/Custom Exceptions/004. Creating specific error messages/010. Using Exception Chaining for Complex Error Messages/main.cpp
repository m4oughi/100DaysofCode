#include <iostream>
#include <exception>
#include <string>
#include <sstream>

class ChainedException : public std::exception {
private:
    std::string message;
public:
    ChainedException(const std::string& errorMessage, const std::exception& cause) {
        std::ostringstream oss;
        oss << errorMessage << " | Cause: " << cause.what();
        message = oss.str();
    }

    const char* what() const noexcept override {
        return message.c_str();
    }
};

int main() {
    try {
        try {
            throw std::runtime_error("Underlying runtime error");
        } catch (const std::exception& e) {
            throw ChainedException("High-level operation failed", e);
        }
    } catch (const ChainedException& e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
