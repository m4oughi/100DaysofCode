#include <iostream>

class SimpleClass {
public:
    SimpleClass() { std::cout << "Object created" << std::endl; }
    ~SimpleClass() { std::cout << "Object destroyed (unwinding)" << std::endl; }
};

void level2() {
    SimpleClass obj;
    throw std::runtime_error("Exception in level2");
}

void level1() {
    SimpleClass obj;
    level2();
}

int main() {
    try {
        level1();
    } catch (const std::exception& e) {
        std::cout << "Caught exception: " << e.what() << std::endl;
    }
    return 0;
}
