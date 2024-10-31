#include <iostream>

class MyException {
public:
    const char* what() const {
        return "Custom Exception Occurred!";
    }
};

int main() {
    try {
        throw MyException();  // Throwing an object
    } catch (const MyException& e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
