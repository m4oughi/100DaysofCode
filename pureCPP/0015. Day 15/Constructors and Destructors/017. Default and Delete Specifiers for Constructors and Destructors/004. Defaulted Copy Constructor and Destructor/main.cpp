#include <iostream>

class MyClass {
public:
    MyClass() = default;
    MyClass(const MyClass&) = default;  // Default copy constructor
    ~MyClass() = default;  // Default destructor
};

int main() {
    MyClass obj1;
    MyClass obj2 = obj1;  // Copy constructor is used
    return 0;
}
