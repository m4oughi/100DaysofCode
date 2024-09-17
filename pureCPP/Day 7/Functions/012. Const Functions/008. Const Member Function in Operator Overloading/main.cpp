#include <iostream>

class MyClass {
private:
    int value;

public:
    MyClass(int v) : value(v) {}

    bool operator==(const MyClass& other) const {
        return value == other.value;
    }
};

int main() {
    MyClass obj1(10);
    MyClass obj2(10);

    if (obj1 == obj2) {
        std::cout << "Objects are equal." << std::endl;
    } else {
        std::cout << "Objects are not equal." << std::endl;
    }

    return 0;
}
