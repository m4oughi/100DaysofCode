#include <iostream>

class Member {
public:
    Member() {
        std::cout << "Member constructor called" << std::endl;
    }

    ~Member() {
        std::cout << "Member destructor called" << std::endl;
    }
};

class Base {
public:
    Base() {
        std::cout << "Base constructor called" << std::endl;
    }

    ~Base() {
        std::cout << "Base destructor called" << std::endl;
    }
};

class Derived : public Base {
private:
    Member member;
public:
    Derived() {
        std::cout << "Derived constructor called" << std::endl;
    }

    ~Derived() {
        std::cout << "Derived destructor called" << std::endl;
    }
};

int main() {
    Derived obj;
    return 0;
}
