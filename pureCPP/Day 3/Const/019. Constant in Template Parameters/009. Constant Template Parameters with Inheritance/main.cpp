#include <iostream>

template <int N>
class Base {
public:
    void printValue() const {
        std::cout << "Base value: " << N << std::endl; // Prints N
    }
};

template <int N>
class Derived : public Base<N> {
public:
    void printDerivedValue() const {
        std::cout << "Derived value: " << N * 2 << std::endl; // Prints N * 2
    }
};

int main() {
    Derived<40> obj;
    obj.printValue();        // Prints "Base value: 40"
    obj.printDerivedValue(); // Prints "Derived value: 80"
}
