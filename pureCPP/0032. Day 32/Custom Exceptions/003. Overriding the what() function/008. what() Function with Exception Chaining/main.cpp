#include <iostream>
#include <exception>
#include <string>
#include <sstream>

class MyException : public std::exception {
private:
    std::string message;
public:
    MyException(const std::string& msg, const std::exception& inner) {
        std::ostringstream oss;
        oss << msg << " | Inner exception: " << inner.what();
        message = oss.str();
    }

    const char* what() const noexcept override {
        return message.c_str();
    }
};

int main() {
    try {
        try {
            throw std::runtime_error("Inner runtime error");
        } catch (const std::exception& e) {
            throw MyException("Outer custom error", e);
        }
    } catch (const MyException& e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
