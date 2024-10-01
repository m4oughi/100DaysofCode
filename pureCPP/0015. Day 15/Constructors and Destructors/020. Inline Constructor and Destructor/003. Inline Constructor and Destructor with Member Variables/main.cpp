#include <iostream>

class MyClass {
public:
    int* ptr;

    // Inline constructor
    MyClass(int value) : ptr(new int(value)) {
        std::cout << "Inline constructor called with value: " << *ptr << std::endl;
    }

    // Inline destructor
    ~MyClass() {
        std::cout << "Inline destructor called, deleting ptr" << std::endl;
        delete ptr;
    }
};

int main() {
    MyClass obj(100);  // Calls inline constructor and destructor
    return 0;
}
