#include <iostream>

class Base {
private:
    int value;
public:
    Base(int v) : value(v) {
        std::cout << "Base class initialized with value = " << value << std::endl;
    }
};

class Derived : public Base {
private:
    int extra;
public:
    // Member initialization list for base class and derived class members
    Derived(int v, int e) : Base(v), extra(e) {
        std::cout << "Derived class initialized with extra = " << extra << std::endl;
    }
};

int main() {
    Derived d(10, 20);  // Initializes both base and derived class members
    return 0;
}
