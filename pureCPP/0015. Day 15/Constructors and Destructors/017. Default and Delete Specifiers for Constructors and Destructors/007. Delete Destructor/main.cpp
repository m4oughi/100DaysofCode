#include <iostream>

class MyClass {
public:
    MyClass() = default;
    ~MyClass() = delete;  // Deleted destructor
};

int main() {
    MyClass obj;
    // obj.~MyClass();  // Error: destructor is deleted, so cannot be called explicitly
    return 0;  // Destructor won't be called automatically
}
