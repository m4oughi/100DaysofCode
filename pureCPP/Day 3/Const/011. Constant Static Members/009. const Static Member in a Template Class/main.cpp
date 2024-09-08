#include <iostream>

template <typename T>
class MyClass {
public:
    static const T defaultValue; // Constant static member in a template class

    void printValue() const {
        std::cout << defaultValue << std::endl;
    }
};

template <typename T>
const T MyClass<T>::defaultValue = T(); // Initialization of constant static member

int main() {
    MyClass<int> intObj;
    MyClass<double> doubleObj;

    intObj.printValue(); // Prints 0 (default for int)
    doubleObj.printValue(); // Prints 0.0 (default for double)
}
