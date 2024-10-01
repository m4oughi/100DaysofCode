#include <iostream>

class MyClass {
public:
    // Inline constructor
    MyClass() {
        std::cout << "Inline constructor called" << std::endl;
    }

    // Inline destructor
    ~MyClass() {
        std::cout << "Inline destructor called" << std::endl;
    }
};

int main() {
    MyClass obj;  // Constructor and destructor will be called inline
    return 0;
}
