#include <iostream>

class MyClass {
public:
    void updateValue(const int newValue) {
        value = newValue;
        // newValue = 120; // NOT allowed: modifying the const parameter is not allowed
    }

    int getValue() const {
        return value;
    }

private:
    int value = 0;
};

int main() {
    MyClass obj;
    int b = 130;
    obj.updateValue(b); // Passing a non-const argument as a const parameter
    std::cout << obj.getValue() << std::endl;

    return 0;
}