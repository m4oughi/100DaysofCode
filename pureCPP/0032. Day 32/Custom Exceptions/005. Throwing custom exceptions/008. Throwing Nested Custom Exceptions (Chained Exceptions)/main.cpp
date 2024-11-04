#include <iostream>
#include <exception>
#include <string>

class LowLevelException : public std::exception {
public:
    const char* what() const noexcept override {
        return "Low-level error occurred!";
    }
};

class HighLevelException : public std::exception {
private:
    std::string message;
public:
    HighLevelException(const std::exception& cause) {
        message = "High-level operation failed due to: " + std::string(cause.what());
    }

    const char* what() const noexcept override {
        return message.c_str();
    }
};

void lowLevelFunction() {
    throw LowLevelException();
}

void highLevelFunction() {
    try {
        lowLevelFunction();
    } catch (const LowLevelException& e) {
        throw HighLevelException(e);
    }
}

int main() {
    try {
        highLevelFunction();
    } catch (const HighLevelException& e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
