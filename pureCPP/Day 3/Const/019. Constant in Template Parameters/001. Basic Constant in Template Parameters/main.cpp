#include <iostream>

template <int N>
class MyClass {
public:
    void printValue() const {
        std::cout << N << std::endl; // Prints the constant parameter value
    }
};

int main() {
    MyClass<10> obj;
    obj.printValue(); // Prints 10
}
