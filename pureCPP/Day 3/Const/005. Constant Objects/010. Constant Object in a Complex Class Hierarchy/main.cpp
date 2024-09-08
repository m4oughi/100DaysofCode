#include <iostream>

class Base {
public:
    virtual int getValue() const = 0; // Pure virtual const function
};

class Derived : public Base {
public:
    Derived(int v) : value(v) {}

    int getValue() const override {
        return value;
    }

private:
    int value;
};

int main() {
    const Derived obj(170);
    int x = obj.getValue(); // Allowed: calling const function through const object

    return 0;
}