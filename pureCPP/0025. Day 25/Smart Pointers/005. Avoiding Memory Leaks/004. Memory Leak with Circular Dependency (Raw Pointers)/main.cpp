#include <iostream>

class B;  // Forward declaration

class A {
public:
    B* ptrB;  // Raw pointer to B
    ~A() { std::cout << "Destructor of A called" << std::endl; }
};

class B {
public:
    A* ptrA;  // Raw pointer to A
    ~B() { std::cout << "Destructor of B called" << std::endl; }
};

int main() {
    A* a = new A();
    B* b = new B();

    a->ptrB = b;
    b->ptrA = a;

    // Forgot to delete both objects, causing a memory leak
    return 0;
}
