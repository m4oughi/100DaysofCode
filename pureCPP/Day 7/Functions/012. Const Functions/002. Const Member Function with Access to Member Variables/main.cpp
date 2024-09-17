#include <iostream>

class MyClass {
private:
    int value;

public:
    MyClass(int v) : value(v) {}

    int getValue() const {
        return value;  // Accessing member variable in a const function
    }
};

int main() {
    MyClass obj(42);
    std::cout << "Value: " << obj.getValue() << std::endl;  // Access value through const function
    return 0;
}
