#include <iostream>

struct Base {
    int id;

    Base(int i) : id(i) {}
};

struct Derived : Base {
    double value;

    // Member initializer list for base class members
    Derived(int i, double v) : Base(i), value(v) {}
};

int main() {


    return 0;
}