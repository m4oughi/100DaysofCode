#include <iostream>

class Test {
public:
    Test() { std::cout << "Constructor called" << std::endl; }
    ~Test() { std::cout << "Destructor called" << std::endl; }
};

int main() {
    try {
        Test t;
        throw 20;  // Throwing an exception, triggers stack unwinding
    } catch (int e) {
        std::cout << "Caught exception: " << e << std::endl;
    }
    return 0;
}
