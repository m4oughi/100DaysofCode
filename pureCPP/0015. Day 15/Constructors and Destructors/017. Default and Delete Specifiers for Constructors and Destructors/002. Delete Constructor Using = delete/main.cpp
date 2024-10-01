#include <iostream>

class MyClass {
public:
    MyClass() = delete;   // Deleting default constructor
    ~MyClass() = default; // Default destructor
};

int main() {
    // MyClass obj;  // This will cause a compile-time error due to deleted constructor
    return 0;
}
