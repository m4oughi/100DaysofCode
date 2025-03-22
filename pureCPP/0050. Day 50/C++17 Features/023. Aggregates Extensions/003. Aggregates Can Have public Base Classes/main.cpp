#include <iostream>

struct Base {
    int a;
};

struct Derived : public Base {
    int b;
};

int main() {
    Derived d{1, 2}; // Base class members included in aggregate initialization
    std::cout << "Derived: (" << d.a << ", " << d.b << ")\n";
    return 0;
}
