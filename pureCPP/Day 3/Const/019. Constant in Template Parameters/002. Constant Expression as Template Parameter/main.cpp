#include <iostream>

template <constexpr int N>
class MyClass {
public:
    void printValue() const {
        std::cout << N << std::endl; // Prints the constant parameter value
    }
};

constexpr int value = 20;

int main() {
    MyClass<value> obj;
    obj.printValue(); // Prints 20
}
