#include <iostream>

class MyClass {
public:
    int value;

    // Default constructor with member initialization
    MyClass() : value(0) {
        std::cout << "Default constructor called, value initialized to " << value << std::endl;
    }
};

int main() {
    MyClass obj;  // Calls the default constructor
    return 0;
}
