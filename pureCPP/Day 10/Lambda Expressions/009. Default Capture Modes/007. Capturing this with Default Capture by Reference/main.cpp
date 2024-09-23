#include <iostream>

class MyClass {
public:
    int value = 10;
    void modify() {
        auto lambda = [this]() {
            value += 10; // Modify the member variable directly
        };
        lambda();
        std::cout << "Modified value: " << value << std::endl; // Outputs: Modified value: 20
    }
};

int main() {
    MyClass obj;
    obj.modify();
    return 0;
}
