#include <iostream>

class MyClass {
public:
    MyClass() {
        std::cout << "Constructor called." << std::endl;
    }

    ~MyClass() {
        std::cout << "Destructor called." << std::endl;
    }

    // Regular member function overloads (allowed)
    void display() {
        std::cout << "Display with no parameters." << std::endl;
    }

    void display(int x) {
        std::cout << "Display with an integer parameter: " << x << std::endl;
    }

    // Destructor overload (not allowed)
    /*
    ~MyClass(int x) {  // Error: destructors cannot have parameters
        std::cout << "Destructor called with value " << x << std::endl;
    }
    */
};

int main() {
    MyClass obj;
    obj.display();
    obj.display(10);
    return 0;
}
