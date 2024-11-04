#include <iostream>
#include <exception>
#include <string>

class MyClass {
public:
    class MyException : public std::exception {
    private:
        std::string message;
    public:
        MyException(const std::string& msg) : message(msg) {}

        const char* what() const noexcept override {
            return message.c_str();
        }
    };
    
    void triggerError() {
        throw MyException("Error triggered inside MyClass!");
    }
};

int main() {
    MyClass obj;
    try {
        obj.triggerError();
    } catch (const MyClass::MyException& e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
