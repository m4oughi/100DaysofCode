#include <iostream>

template <int A, int B>
class MyClass {
public:
    void printValues() const {
        std::cout << "A: " << A << ", B: " << B << std::endl; // Prints A and B
    }
};

int main() {
    MyClass<10, 20> obj;
    obj.printValues(); // Prints "A: 10, B: 20"
}
