#include <iostream>

template<typename T>
class MyClass {
private:
    T value;
    MyClass(T x) : value(x) {  // Private constructor
        std::cout << "Private constructor called with value: " << value << std::endl;
    }

public:
    friend MyClass createObject(T x) {  // Friend function as a template
        return MyClass(x);  // Accessing private constructor
    }
};

int main() {
    MyClass<int> obj1 = createObject(42);  // Creating object with int type
    MyClass<double> obj2 = createObject(3.14);  // Creating object with double type
    return 0;
}
