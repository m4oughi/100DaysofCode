#include <iostream>
#include <exception>
#include <sstream>

class MyException : public std::exception {
private:
    std::string message;
public:
    MyException(int line, const std::string& function) {
        std::ostringstream oss;
        oss << "Error in function " << function << " at line " << line;
        message = oss.str();
    }
    
    const char* what() const noexcept override {
        return message.c_str();
    }
};

int main() {
    try {
        throw MyException(__LINE__, __func__);
    } catch (const MyException& e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
