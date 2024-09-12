#include <iostream>

struct Base {
    const int baseValue;
    mutable int baseAccessCount;

    Base(int v) : baseValue(v), baseAccessCount(0) {}

    void showBase() const {
        ++baseAccessCount;
        std::cout << "Base value: " << baseValue << " (Accessed: " << baseAccessCount << " times)" << std::endl;
    }
};

struct Derived : public Base {
    int derivedValue;

    Derived(int bVal, int dVal) : Base(bVal), derivedValue(dVal) {}

    void showDerived() const {
        std::cout << "Derived value: " << derivedValue << std::endl;
        showBase();  // Calls Base's const function
    }
};

int main() {
    Derived d(5, 10);
    d.showDerived();
    d.showDerived();
    return 0;
}
