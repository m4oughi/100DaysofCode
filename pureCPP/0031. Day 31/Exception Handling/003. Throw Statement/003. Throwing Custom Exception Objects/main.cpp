#include <iostream>

class MyException {
public:
    const char* what() const {
        return "Custom Exception Thrown!";
    }
};

int main() {
    try {
        throw MyException();  // Throwing custom exception object
    } catch (const MyException& e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
