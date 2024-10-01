#include <iostream>

class MyClass {
public:
    int* ptr;

    // Constructor
    MyClass(int value) {
        ptr = new int(value);
        std::cout << "Constructor called, allocated ptr with value: " << *ptr << std::endl;
    }

    // Copy constructor
    MyClass(const MyClass& other) {
        ptr = new int(*(other.ptr));  // Deep copy of dynamically allocated memory
        std::cout << "Copy constructor called, copied ptr with value: " << *ptr << std::endl;
    }

    // Destructor
    ~MyClass() {
        std::cout << "Destructor called, deallocating ptr" << std::endl;
        delete ptr;
    }
};

int main() {
    MyClass obj1(42);  // Constructor
    MyClass obj2 = obj1;  // Copy constructor is called
    return 0;
}
