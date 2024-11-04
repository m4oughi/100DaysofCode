#include <iostream>
#include <exception>

class MyException : public std::exception {
public:
    MyException() {
        std::cout << "MyException default constructor called." << std::endl;
    }
    const char* what() const noexcept override {
        return "MyException occurred!";
    }
};

int main() {
    try {
        throw MyException();
    } catch (const MyException& e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
