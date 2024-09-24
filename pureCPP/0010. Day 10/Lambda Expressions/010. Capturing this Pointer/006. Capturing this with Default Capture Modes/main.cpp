#include <iostream>

class MyClass {
public:
    int value = 10;

    void modifyValue() {
        auto lambda = [=]() mutable {
            std::cout << "Captured Value (by value): " << value << std::endl;
            value += 5; // Modifies the local copy, not the class member
        };

        lambda(); // Outputs: Captured Value (by value): 10
        std::cout << "Actual Value: " << value << std::endl; // Outputs: Actual Value: 10
    }
};

int main() {
    MyClass obj;
    obj.modifyValue();
    return 0;
}
