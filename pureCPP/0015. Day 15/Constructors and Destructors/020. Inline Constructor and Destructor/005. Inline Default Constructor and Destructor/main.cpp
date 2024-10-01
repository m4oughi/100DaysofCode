#include <iostream>

class MyClass {
public:
    // Inline default constructor
    MyClass() {
        std::cout << "Inline default constructor called" << std::endl;
    }

    // Inline default destructor
    ~MyClass() {
        std::cout << "Inline default destructor called" << std::endl;
    }
};

int main() {
    MyClass obj;  // Calls inline default constructor and destructor
    return 0;
}
