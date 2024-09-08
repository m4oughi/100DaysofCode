#include <iostream>

void displayMessage() {
    std::cout << "Hello from a function!" << std::endl;
}

class MyClass {
public:
    static const void (*functionPtr)(); // Constant static function pointer

    void callFunction() const {
        functionPtr(); // Calling the function through the pointer
    }
};

const void (*MyClass::functionPtr)() = &displayMessage; // Initialization of function pointer

int main() {
    MyClass obj;
    obj.callFunction(); // Prints "Hello from a function!"
}
