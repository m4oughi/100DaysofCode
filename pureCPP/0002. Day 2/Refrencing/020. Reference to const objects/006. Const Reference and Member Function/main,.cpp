#include <iostream>

class MyClass {
    int value;
public:
    MyClass(int v) : value(v) {}

    void displayValue() const {  // Const member function
        const int& ref = value;  // Reference to const object
        std::cout << "Value: " << ref << std::endl;
    }
};

int main() {
    MyClass obj(70);
    obj.displayValue();  // Displays value using const reference

    return 0;
}
