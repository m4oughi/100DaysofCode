#include <iostream>
#include <exception>
#include <string>
#include <sstream>

class MyException : public std::exception {
private:
    std::string message;
public:
    MyException(const std::string& msg, const char* function, int line) {
        std::ostringstream oss;
        oss << msg << " in function " << function << " at line " << line;
        message = oss.str();
    }

    const char* what() const noexcept override {
        return message.c_str();
    }
};

int main() {
    try {
        throw MyException("Error occurred", __func__, __LINE__);
    } catch (const MyException& e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
