#include <iostream>

class MyClass {
public:
    int value;
    static int staticValue;

    // Constructor
    MyClass(int v) : value(v) {}

    // Copy constructor
    MyClass(const MyClass& other) {
        value = other.value;
        // Static members are not copied
        std::cout << "Copy constructor called, value: " << value << std::endl;
    }
};

// Definition of static member
int MyClass::staticValue = 100;

int main() {
    MyClass obj1(50);
    MyClass obj2 = obj1;  // Calls the copy constructor
    std::cout << "Static value: " << MyClass::staticValue << std::endl;
    return 0;
}
