#include <iostream>

class MyClass {
public:
    MyClass(int v) : value(v) {}

    int getValue() const {
        return value;
    }

    void setValue(int v) {
        value = v;
    }

private:
    int value;
};

int main() {
    const MyClass obj(90); // obj is a top-level const, cannot be reassigned
    std::cout << obj.getValue() << std::endl;
    // obj.setValue(100); // NOT allowed: modifying the const object is not allowed
    // obj = MyClass(110); // NOT allowed: reassignment of obj is not allowed

    return 0;
}