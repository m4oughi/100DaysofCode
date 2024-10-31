#include <iostream>

class Test {
public:
    Test() {
        std::cout << "Constructor called" << std::endl;
        throw 99;  // Throw exception in constructor
    }
    ~Test() {
        std::cout << "Destructor called" << std::endl;
    }
};

int main() {
    try {
        Test t;  // Exception thrown here
    } catch (int e) {
        std::cout << "Caught exception in constructor: " << e << std::endl;
    }
    return 0;
}
