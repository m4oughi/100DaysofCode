#include <iostream>

class MyClass {
    int value;
public:
    MyClass(int v) : value(v) {}

    const int& getValue() const {  // Returns a const reference to member
        return value;
    }
};

int main() {
    MyClass obj(150);
    const int& ref = obj.getValue();  // Reference to const member

    std::cout << "Class value: " << ref << std::endl;  // Output: 150

    return 0;
}
