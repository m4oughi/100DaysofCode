#include <iostream>

class MyClass {
public:
    // Default constructor
    MyClass() {
        std::cout << "Default constructor called" << std::endl;
    }

    // User-defined destructor
    ~MyClass() {
        std::cout << "User-defined destructor called" << std::endl;
    }
};

int main() {
    MyClass obj;  // Calls the default constructor and user-defined destructor
    return 0;
}
