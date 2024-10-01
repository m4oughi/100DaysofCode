#include <iostream>

class MyClass {
public:
    // Delete the default constructor
    MyClass() = delete;

    MyClass(int value) {
        std::cout << "Parameterized constructor called with value: " << value << std::endl;
    }
};

int main() {
    // MyClass obj;  // Error: Default constructor is deleted
    MyClass obj(42);  // Calls the parameterized constructor
    return 0;
}
