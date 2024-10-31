#include <iostream>

class Test {
public:
    Test() {
        std::cout << "Constructor called" << std::endl;
        throw 99;  // Throwing an exception from a constructor
    }
};

int main() {
    try {
        Test t;  // Constructor will throw an exception
    } catch (int e) {
        std::cout << "Caught exception in constructor: " << e << std::endl;
    }
    return 0;
}
