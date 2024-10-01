#include <iostream>

class MyClass {
public:
    // Default constructor
    MyClass() {
        std::cout << "Default constructor called" << std::endl;
    }
};

int main() {
    MyClass obj;  // Calls the default constructor
    return 0;
}
