#include <iostream>
#include <exception>
#include <string>
#include <ctime>
#include <sstream>

class MyException : public std::exception {
private:
    std::string message;
public:
    MyException(const std::string& msg) {
        std::time_t now = std::time(nullptr);
        std::ostringstream oss;
        oss << msg << " (Occurred at: " << std::ctime(&now) << ")";
        message = oss.str();
    }

    const char* what() const noexcept override {
        return message.c_str();
    }
};

int main() {
    try {
        throw MyException("Error occurred");
    } catch (const MyException& e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
