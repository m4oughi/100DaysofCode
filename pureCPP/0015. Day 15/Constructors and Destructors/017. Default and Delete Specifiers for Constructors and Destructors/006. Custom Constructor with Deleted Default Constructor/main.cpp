#include <iostream>

class MyClass {
public:
    MyClass() = delete;  // Default constructor deleted
    MyClass(int x) {  // Custom constructor
        std::cout << "Custom constructor called with value: " << x << std::endl;
    }
    ~MyClass() = default;
};

int main() {
    // MyClass obj;  // Error: default constructor is deleted
    MyClass obj(10);  // Custom constructor is called
    return 0;
}
