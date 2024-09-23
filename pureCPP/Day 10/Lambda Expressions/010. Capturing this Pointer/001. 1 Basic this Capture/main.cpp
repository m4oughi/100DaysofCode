#include <iostream>

class MyClass {
public:
    int value = 10;

    void displayValue() {
        auto lambda = [this]() {
            std::cout << "Value: " << value << std::endl;
        };
        lambda(); // Outputs: Value: 10
    }
};

int main() {
    MyClass obj;
    obj.displayValue();
    return 0;
}
