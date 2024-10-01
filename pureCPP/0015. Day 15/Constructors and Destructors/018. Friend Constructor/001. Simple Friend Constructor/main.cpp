#include <iostream>

class MyClass {
private:
    MyClass() {  // Private constructor
        std::cout << "Private constructor called" << std::endl;
    }

public:
    friend MyClass createObject();  // Friend function declaration
};

MyClass createObject() {
    MyClass obj;  // Accessing private constructor
    return obj;
}

int main() {
    MyClass obj = createObject();  // Calling the friend function to create an object
    return 0;
}
