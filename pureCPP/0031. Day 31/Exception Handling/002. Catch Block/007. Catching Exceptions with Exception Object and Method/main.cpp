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
    } catch (const MyException& e) {  // Catching object
        std::cout << "Caught exception: " << e.what() << std::endl;
    }
    return 0;
}
