#include <iostream>

class MyClass {
private:
    MyClass() {  // Private constructor
        std::cout << "Private constructor called" << std::endl;
    }

    MyClass(const MyClass&) = delete;  // Delete copy constructor

public:
    static MyClass createObject() {
        return MyClass();
    }
};

int main() {
    MyClass obj1 = MyClass::createObject();  // Creating an object through static method
    // MyClass obj2 = obj1;  // Error: Copy constructor is deleted
    return 0;
}
