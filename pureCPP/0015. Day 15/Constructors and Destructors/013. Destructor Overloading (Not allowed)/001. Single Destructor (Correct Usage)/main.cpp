#include <iostream>

class MyClass {
public:
    MyClass() {
        std::cout << "Constructor called." << std::endl;
    }

    ~MyClass() {  // Single, parameterless destructor
        std::cout << "Destructor called." << std::endl;
    }
};

int main() {
    MyClass obj;
    return 0;  // Destructor will be called when obj goes out of scope
}
