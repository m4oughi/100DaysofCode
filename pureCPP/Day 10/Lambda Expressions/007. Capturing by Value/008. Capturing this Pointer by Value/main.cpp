#include <iostream>

class MyClass {
public:
    int value = 10;
    void captureThis() {
        auto lambda = [*this]() {
            std::cout << "Captured value: " << value << std::endl; // Value of the copied MyClass object
        };

        value = 20;
        lambda(); // Outputs: Captured value: 10
    }
};

int main() {
    MyClass obj;
    obj.captureThis();
    return 0;
}
