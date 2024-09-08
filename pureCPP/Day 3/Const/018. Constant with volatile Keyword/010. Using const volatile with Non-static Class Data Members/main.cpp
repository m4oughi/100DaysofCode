#include <iostream>

class MyClass {
public:
    const volatile int value = 500;

    void printValue() const {
        std::cout << value << std::endl; // Prints 500
    }
};

int main() {
    MyClass obj;
    obj.printValue();
}
