#include <iostream>

class MyClass {
public:
    int value = 10;

    void modifyValue() {
        auto lambda = [this]() mutable {
            value += 5; // Modifies value using mutable
            std::cout << "Modified Value: " << value << std::endl;
        };

        lambda(); // Outputs: Modified Value: 15
        std::cout << "Outside Lambda, Value: " << value << std::endl; // Outputs: Outside Lambda, Value: 15
    }
};

int main() {
    MyClass obj;
    obj.modifyValue();
    return 0;
}
