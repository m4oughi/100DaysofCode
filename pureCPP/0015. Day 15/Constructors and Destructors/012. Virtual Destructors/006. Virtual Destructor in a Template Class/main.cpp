#include <iostream>

template<typename T>
class Base {
public:
    Base() {
        std::cout << "Base constructor called." << std::endl;
    }

    virtual ~Base() {
        std::cout << "Base destructor called." << std::endl;
    }
};

template<typename T>
class Derived : public Base<T> {
public:
    Derived() {
        std::cout << "Derived constructor called." << std::endl;
    }

    ~Derived() {
        std::cout << "Derived destructor called." << std::endl;
    }
};

int main() {
    Base<int>* ptr = new Derived<int>();
    delete ptr;  // Calls Derived<int> and Base<int> destructors
    return 0;
}
