#include <iostream>

template<typename T>
class MyClass {
private:
    T value;
    MyClass(T val) : value(val) {  // Private constructor
        std::cout << "Private constructor called with value: " << value << std::endl;
    }

public:
    static MyClass createObject(T val) {  // Static member function to access private constructor
        return MyClass(val);
    }
};

int main() {
    MyClass<int> obj1 = MyClass<int>::createObject(42);  // Creating an object with int type
    MyClass<double> obj2 = MyClass<double>::createObject(3.14);  // Creating an object with double type
    return 0;
}
