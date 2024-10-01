#include <iostream>

template <typename T>
class MyClass {
public:
    T value;

    // Default constructor
    MyClass() : value(0) {
        std::cout << "Default constructor called, value = " << value << std::endl;
    }
};

int main() {
    MyClass<int> obj1;     // Default constructor with int type
    MyClass<double> obj2;  // Default constructor with double type
    return 0;
}
