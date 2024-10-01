#include <iostream>

class Base {
public:
    Base() {
        std::cout << "Base constructor called." << std::endl;
    }

    virtual ~Base() {
        std::cout << "Base destructor called." << std::endl;
    }
};

class Derived : public Base {
private:
    int* data;
public:
    Derived(int size) {
        data = new int[size];
        std::cout << "Memory allocated in Derived." << std::endl;
    }

    ~Derived() {
        delete[] data;
        std::cout << "Memory deallocated in Derived." << std::endl;
    }
};

int main() {
    Base* ptr = new Derived(5);
    delete ptr;  // Calls Derived destructor, then Base destructor, ensuring memory is freed
    return 0;
}
