#include <iostream>

class MyClass {
public:
    int* ptr;

    // Constructor
    MyClass(int value) {
        ptr = new int(value);
        std::cout << "Constructor called, allocated ptr with value: " << *ptr << std::endl;
    }

    // Shallow copy constructor (bad practice)
    MyClass(const MyClass& other) {
        ptr = other.ptr;  // Shallow copy
        std::cout << "Shallow copy constructor called" << std::endl;
    }

    // Destructor
    ~MyClass() {
        std::cout << "Destructor called, deallocating ptr" << std::endl;
        delete ptr;
    }
};

int main() {
    MyClass obj1(100);  // Constructor
    MyClass obj2 = obj1;  // Shallow copy constructor called

    // Issues with shallow copy might occur here (e.g., double delete).
    return 0;
}
