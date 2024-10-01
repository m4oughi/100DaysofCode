#include <iostream>

class MyClass {
private:
    MyClass() {  // Private constructor
        std::cout << "Private constructor called" << std::endl;
    }

public:
    static MyClass createObject() {  // Static member function can access private constructor
        return MyClass();
    }
};

int main() {
    // MyClass obj;  // Error: Cannot access private constructor
    MyClass obj = MyClass::createObject();  // Object creation through static member function
    return 0;
}
