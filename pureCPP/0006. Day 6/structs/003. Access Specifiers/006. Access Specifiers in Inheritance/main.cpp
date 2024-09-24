#include <iostream>

struct Base {
protected:
    int protectedVar;

public:
    Base(int val) : protectedVar(val) {}
};

struct Derived : public Base {
public:
    Derived(int val) : Base(val) {}

    int getProtectedVar() const {
        return protectedVar; // Accessible due to protected inheritance
    }
};


int main() {


    return 0;
}