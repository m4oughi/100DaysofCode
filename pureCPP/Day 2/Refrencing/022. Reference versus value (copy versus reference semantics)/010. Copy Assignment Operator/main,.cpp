#include <iostream>

class MyClass {
    int value;
public:
    MyClass(int v) : value(v) {}
    MyClass& operator=(const MyClass& other) {  // Copy assignment operator
        if (this != &other) {
            value = other.value;
        }
        return *this;
    }
    int getValue() const { return value; }
};

int main() {
    MyClass obj1(30);
    MyClass obj2(40);
    obj2 = obj1;  // Copy assignment
    std::cout << "obj2 value after assignment: " << obj2.getValue() << std::endl;  // Output: 30

    return 0;
}
