#include <iostream>

class MyClass {
private:
    int value;

public:
    MyClass(int v) : value(v) {}

    int getValue() const {
        return value;
    }
};

void printValue(const MyClass& obj) {
    std::cout << "Value: " << obj.getValue() << std::endl;  // Call const member function
}

int main() {
    const MyClass obj(10);
    printValue(obj);  // Pass const object to function
    return 0;
}
