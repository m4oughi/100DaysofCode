#include <iostream>

template <int N>
class MyClass {
public:
    void printValue() const {
        std::cout << "General: " << N << std::endl;
    }
};

// Specialization for N = 10
template <>
class MyClass<10> {
public:
    void printValue() const {
        std::cout << "Specialized: " << 10 << std::endl;
    }
};

int main() {
    MyClass<5> obj1;
    MyClass<10> obj2;

    obj1.printValue(); // Prints "General: 5"
    obj2.printValue(); // Prints "Specialized: 10"
}
