#include <iostream>

class MyException {
public:
    const char* what() const {
        return "My custom exception!";
    }
};

int main() {
    try {
        throw MyException();  // Throwing custom exception
    } catch (const MyException& e) {
        std::cout << "Caught: " << e.what() << std::endl;
    }
    return 0;
}
