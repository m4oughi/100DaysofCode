#include <iostream>

template <int N>
class Base {
public:
    static const int value = N;
};

template <int M>
class Derived : public Base<M> {
public:
    void printValue() const {
        std::cout << "Derived value: " << Base<M>::value << std::endl; // Prints M
    }
};

int main() {
    Derived<30> obj;
    obj.printValue(); // Prints "Derived value: 30"
}
