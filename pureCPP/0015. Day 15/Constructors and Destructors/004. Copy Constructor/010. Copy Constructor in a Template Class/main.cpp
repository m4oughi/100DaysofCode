#include <iostream>

template <typename T>
class MyClass {
public:
    T value;

    // Constructor
    MyClass(T v) : value(v) {}

    // Copy constructor
    MyClass(const MyClass& other) : value(other.value) {
        std::cout << "Copy constructor called, copied value: " << value << std::endl;
    }
};

int main() {
    MyClass<int> obj1(5);  // Constructor called
    MyClass<int> obj2 = obj1;  // Copy constructor called
    return 0;
}
