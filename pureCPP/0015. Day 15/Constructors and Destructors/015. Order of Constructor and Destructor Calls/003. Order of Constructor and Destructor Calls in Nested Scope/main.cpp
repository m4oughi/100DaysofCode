#include <iostream>

class MyClass {
public:
    MyClass(const std::string& name) {
        std::cout << "Constructor called for " << name << std::endl;
    }

    ~MyClass() {
        std::cout << "Destructor called." << std::endl;
    }
};

int main() {
    MyClass obj1("Outer Object");  // Constructor for outer object
    {
        MyClass obj2("Inner Object");  // Constructor for inner object
    }  // Destructor for inner object is called as we exit the block
    return 0;  // Destructor for outer object is called at the end of main
}
