#include <iostream>
#include <stdexcept>

class MyClass {
public:
    void oldMethod() throw(std::runtime_error) {
        std::cout << "Old method with exception specification" << std::endl;
        throw std::runtime_error("Runtime error in oldMethod");
    }

    void modernMethod() noexcept(false) {
        std::cout << "Modern method with noexcept" << std::endl;
        throw std::runtime_error("Runtime error in modernMethod");
    }
};

int main() {
    MyClass obj;

    try {
        obj.oldMethod();
    } catch (const std::exception& e) {
        std::cout << "Caught exception from oldMethod: " << e.what() << std::endl;
    }

    try {
        obj.modernMethod();
    } catch (const std::exception& e) {
        std::cout << "Caught exception from modernMethod: " << e.what() << std::endl;
    }

    return 0;
}
