#include <iostream>
#include <exception>

class MyException : public std::exception {
public:
    const char* what() const noexcept override {
        return "Rethrowing custom exception!";
    }
};

void process() {
    try {
        throw MyException();  // Throwing a custom exception
    } catch (const MyException& e) {
        std::cout << "Caught in process: " << e.what() << std::endl;
        throw;  // Rethrowing the exception
    }
}

int main() {
    try {
        process();  // Exception will be rethrown to this block
    } catch (const MyException& e) {
        std::cout << "Caught rethrown exception in main: " << e.what() << std::endl;
    }
    return 0;
}
