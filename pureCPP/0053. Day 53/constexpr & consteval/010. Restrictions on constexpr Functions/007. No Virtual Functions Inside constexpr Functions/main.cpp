#include <iostream>

class Base {
public:
    // virtual constexpr int getValue() const { return 42; } ❌ ERROR: Virtual function cannot be `constexpr`.
    virtual int getValue() const { return 42; }
};

int main() {
    return 0;
}
