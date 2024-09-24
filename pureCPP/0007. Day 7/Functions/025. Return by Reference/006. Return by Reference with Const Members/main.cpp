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
    MyClass obj(10);
    const int& ref = obj.getValue();
    std::cout << "obj.value: " << ref << std::endl;  // Output: obj.value: 10
    // ref = 20;  // Error: ref is a const reference
    return 0;
}
