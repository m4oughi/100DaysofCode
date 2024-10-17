#include <iostream>

class MyClass {
public:
    int value;

    MyClass(int &&v) : value(v) {  // Rvalue reference in constructor
        std::cout << "Rvalue constructor called" << std::endl;
    }
};

int main() {
    MyClass obj(10);  // Calls the constructor with an Rvalue
    return 0;
}
