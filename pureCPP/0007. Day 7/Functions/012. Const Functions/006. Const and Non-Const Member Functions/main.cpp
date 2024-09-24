#include <iostream>

class MyClass {
private:
    int value;

public:
    MyClass(int v) : value(v) {}

    int getValue() const {
        return value;
    }

    void setValue(int v) {
        value = v;
    }
};

int main() {
    MyClass obj(10);
    std::cout << "Initial value: " << obj.getValue() << std::endl;

    obj.setValue(20);  // Modify value with non-const function
    std::cout << "Modified value: " << obj.getValue() << std::endl;

    const MyClass constObj(30);
    std::cout << "Const object value: " << constObj.getValue() << std::endl;
    // constObj.setValue(40); // Error: cannot call non-const function on const object

    return 0;
}
