#include <iostream>

class MyClass {
public:
    static int count;

    // Default constructor
    MyClass() {
        count++;
        std::cout << "Default constructor called. Count = " << count << std::endl;
    }
};

// Initialize static member variable
int MyClass::count = 0;

int main() {
    MyClass obj1;  // Calls default constructor, increments count
    MyClass obj2;  // Calls default constructor, increments count
    return 0;
}
