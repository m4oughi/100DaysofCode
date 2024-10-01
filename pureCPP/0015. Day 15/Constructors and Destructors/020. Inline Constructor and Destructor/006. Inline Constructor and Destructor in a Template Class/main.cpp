#include <iostream>

template <typename T>
class MyClass {
public:
    T value;

    // Inline constructor
    MyClass(T v) : value(v) {
        std::cout << "Inline constructor called with value: " << value << std::endl;
    }

    // Inline destructor
    ~MyClass() {
        std::cout << "Inline destructor called for value: " << value << std::endl;
    }
};

int main() {
    MyClass<int> obj1(10);      // Inline constructor/destructor with int
    MyClass<double> obj2(3.14);  // Inline constructor/destructor with double
    return 0;
}
