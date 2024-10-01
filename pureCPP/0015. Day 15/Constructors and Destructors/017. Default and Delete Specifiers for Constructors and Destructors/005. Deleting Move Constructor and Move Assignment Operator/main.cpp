#include <iostream>

class MyClass {
public:
    MyClass() = default;
    MyClass(MyClass&&) = delete;  // Delete move constructor
    MyClass& operator=(MyClass&&) = delete;  // Delete move assignment operator
    ~MyClass() = default;
};

int main() {
    MyClass obj1;
    // MyClass obj2 = std::move(obj1);  // Error: move constructor is deleted
    return 0;
}
