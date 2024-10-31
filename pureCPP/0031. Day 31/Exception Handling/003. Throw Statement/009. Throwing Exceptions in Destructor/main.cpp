#include <iostream>

class Test {
public:
    ~Test() {
        std::cout << "Destructor called" << std::endl;
        throw 500;  // Throwing an exception inside a destructor
    }
};

int main() {
    try {
        Test t;
    } catch (int e) {
        std::cout << "Caught exception from destructor: " << e << std::endl;
    }
    return 0;
}
