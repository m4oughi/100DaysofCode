#include <iostream>

class MyClass {
public:
    MyClass(int v) : value(v) {}

    int getValue() const {
        return value;
    }

private:
    int value;
};

void printValue(const MyClass &obj) {
    std::cout << obj.getValue() << std::endl;
}

int main() {
    const MyClass obj(60);
    printValue(obj); // Allowed: passing const object to function

    return 0;
}