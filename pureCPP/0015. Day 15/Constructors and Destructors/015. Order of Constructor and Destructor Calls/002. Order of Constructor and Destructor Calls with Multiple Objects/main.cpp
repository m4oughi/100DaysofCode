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
    MyClass obj1("Object 1");  // Constructor for obj1 is called
    MyClass obj2("Object 2");  // Constructor for obj2 is called
    return 0;  // Destructors will be called in reverse order
}
