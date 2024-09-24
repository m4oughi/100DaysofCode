#include <iostream>

class MyClass {
public:
    void setValue(const int &val) {
        value = val; // Assigning the value from the constant reference
    }

    int getValue() const {
        return value;
    }

private:
    int value;
};

int main() {
    int b = 110;
    MyClass obj;
    obj.setValue(b); // Passing a non-const variable as a const reference
    std::cout << obj.getValue() << std::endl;

    return 0;
}