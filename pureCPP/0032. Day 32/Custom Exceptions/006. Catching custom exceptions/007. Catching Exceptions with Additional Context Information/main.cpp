#include <iostream>
#include <exception>
#include <string>

class DetailedException : public std::exception {
private:
    std::string message;
public:
    DetailedException(const std::string& msg) : message(msg) {}

    const char* what() const noexcept override {
        return message.c_str();
    }
};

void checkCondition(bool condition) {
    if (!condition)
        throw DetailedException("Condition failed with error code 42");
}

int main() {
    try {
        checkCondition(false);  // Will throw the exception
    } catch (const DetailedException& e) {
        std::cout << "Caught exception with details: " << e.what() << std::endl;
    }
    return 0;
}
