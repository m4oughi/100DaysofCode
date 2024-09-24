#include <iostream>

class MyClass {
    int value;
public:
    MyClass(int v) : value(v) {}
    
    int getValue() const {  // Const member function
        return value;
    }

    const int& getValueRef() const {  // Reference to const object
        return value;
    }
};

int main() {
    MyClass obj(100);
    const int& ref = obj.getValueRef();  // Reference to const member

    std::cout << "Value: " << ref << std::endl;  // Output: 100

    return 0;
}
