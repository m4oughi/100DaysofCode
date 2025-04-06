#include <iostream>

struct Base {
    virtual int getValue() const { return 10; }  // ❌ Virtual function not allowed in constexpr
};

struct Derived : public Base {
    int getValue() const override { return 20; }
};

constexpr int getDerivedValue() {
    // Base* b = new Derived();  // ❌ Compilation error: virtual functions not allowed
    Derived d;
    return d.getValue();  // ✅ Works because there's no dynamic dispatch
}

int main() {
    constexpr int val = getDerivedValue();
    std::cout << "Value: " << val << '\n';
}
