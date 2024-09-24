#include <iostream>

class MyClass {
private:
    int value;

public:
    MyClass(int v) : value(v) {}

    int& getValue() {
        return value;  // Return by reference
    }
};

int main() {
    MyClass obj(10);
    int& ref = obj.getValue();
    ref = 20;  // Modify value through reference
    std::cout << "obj.value: " << obj.getValue() << std::endl;  // Output: obj.value: 20
    return 0;
}
