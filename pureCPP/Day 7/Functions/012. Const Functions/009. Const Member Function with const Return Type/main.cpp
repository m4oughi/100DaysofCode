#include <iostream>

class MyClass {
private:
    int value;

public:
    MyClass(int v) : value(v) {}

    const int& getValue() const {
        return value;  // Return const reference
    }
};

int main() {
    MyClass obj(42);
    std::cout << "Value: " << obj.getValue() << std::endl;
    return 0;
}
