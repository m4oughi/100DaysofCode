#include <iostream>
#include <exception>
#include <string>

class BadCastException : public std::exception {
private:
    std::string message;
public:
    BadCastException(const std::string& fromType, const std::string& toType) {
        message = "Error: Cannot cast from " + fromType + " to " + toType;
    }

    const char* what() const noexcept override {
        return message.c_str();
    }
};

int main() {
    try {
        throw BadCastException("int", "std::string");
    } catch (const BadCastException& e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
