#include <iostream>

class Base {
protected:
    int* data;
public:
    Base(int size) {
        data = new int[size];
        std::cout << "Base constructor called, allocated memory" << std::endl;
    }

    ~Base() {
        delete[] data;
        std::cout << "Base destructor called, released memory" << std::endl;
    }
};

class Derived : public Base {
public:
    Derived(int size) : Base(size) {
        std::cout << "Derived constructor called" << std::endl;
    }

    ~Derived() {
        std::cout << "Derived destructor called" << std::endl;
    }
};

int main() {
    Derived obj(10);  // Memory is allocated in Base and deallocated in destructors
    return 0;
}
