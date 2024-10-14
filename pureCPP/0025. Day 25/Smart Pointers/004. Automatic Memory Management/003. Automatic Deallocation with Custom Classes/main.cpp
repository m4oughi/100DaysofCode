#include <iostream>
#include <memory>

class MyClass {
public:
    MyClass() { std::cout << "Constructor called" << std::endl; }
    ~MyClass() { std::cout << "Destructor called" << std::endl; }
};

int main() {
    {
        std::unique_ptr<MyClass> ptr = std::make_unique<MyClass>();
        // ptr manages the memory of MyClass object
    }  // ptr goes out of scope, and memory is automatically deallocated

    std::cout << "End of main" << std::endl;
    return 0;
}
