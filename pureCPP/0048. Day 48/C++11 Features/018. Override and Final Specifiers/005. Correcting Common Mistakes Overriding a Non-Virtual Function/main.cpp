#include <iostream>

class Base {
public:
    void print() { std::cout << "Base::print()\n"; } // Not virtual!
};

class Derived : public Base {
public:
    // void print() override { std::cout << "Derived::print()\n"; } // Compilation Error: print() is not virtual
};

int main() {
    Derived d;
    d.print(); // Calls Base::print()
    return 0;
}
