#include <iostream>

class MyClass {
public:
    MyClass() = default;
    MyClass(const MyClass&) = delete;  // Delete copy constructor
    MyClass& operator=(const MyClass&) = delete;  // Delete copy assignment operator
    ~MyClass() = default;
};

int main() {
    MyClass obj1;
    // MyClass obj2 = obj1;  // Error: copy constructor is deleted
    return 0;
}
