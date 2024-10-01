#include <iostream>

class MyClass {
public:
    int* ptr;

    // Default constructor with dynamic memory allocation
    MyClass() {
        ptr = new int(10);  // Allocating memory
        std::cout << "Default constructor called, allocated memory for ptr with value " << *ptr << std::endl;
    }

    ~MyClass() {
        delete ptr;  // Releasing memory
        std::cout << "Destructor called, memory deallocated" << std::endl;
    }
};

int main() {
    MyClass obj;  // Calls the default constructor
    return 0;
}
