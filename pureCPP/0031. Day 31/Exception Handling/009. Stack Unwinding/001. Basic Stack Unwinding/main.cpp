#include <iostream>

class SimpleClass {
public:
    SimpleClass() { std::cout << "Object created" << std::endl; }
    ~SimpleClass() { std::cout << "Object destroyed (unwinding)" << std::endl; }
};

int main() {
    try {
        SimpleClass obj;
        throw std::runtime_error("Exception thrown");
    } catch (const std::exception& e) {
        std::cout << "Caught exception: " << e.what() << std::endl;
    }
    return 0;
}
