#include <iostream>

class MyClass {
public:
    MyClass() = default;  // Default constructor
    MyClass(int x) = delete;  // Delete custom constructor with int parameter
    MyClass(const MyClass&) = delete;  // Delete copy constructor
    MyClass(MyClass&&) = default;  // Default move constructor
    MyClass& operator=(const MyClass&) = delete;  // Delete copy assignment
    MyClass& operator=(MyClass&&) = default;  // Default move assignment
    ~MyClass() = default;  // Default destructor
};

int main() {
    MyClass obj1;  // Default constructor works
    // MyClass obj2(10);  // Error: custom constructor with int is deleted
    MyClass obj3(std::move(obj1));  // Move constructor works
    return 0;
}
