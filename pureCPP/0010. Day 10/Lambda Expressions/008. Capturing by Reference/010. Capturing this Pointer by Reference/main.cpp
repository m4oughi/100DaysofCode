#include <iostream>

class MyClass {
public:
    int value = 10;

    void modifyValue() {
        auto lambda = [this]() {
            value *= 2; // Modify the member variable through this pointer
        };

        lambda();
        std::cout << "Modified value: " << value << std::endl; // Outputs: Modified value: 20
    }
};

int main() {
    MyClass obj;
    obj.modifyValue();
    return 0;
}
