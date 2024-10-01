#include <iostream>

class MyClass {
public:
    MyClass() {
        std::cout << "Constructor called." << std::endl;
    }

    ~MyClass() {  // Correct destructor
        std::cout << "Destructor called." << std::endl;
    }

    // The following code is incorrect and will result in a compilation error
    /*
    ~MyClass(int x) {  // Error: destructors cannot have parameters
        std::cout << "Overloaded destructor called with value " << x << std::endl;
    }
    */
};

int main() {
    MyClass obj;
    return 0;
}
