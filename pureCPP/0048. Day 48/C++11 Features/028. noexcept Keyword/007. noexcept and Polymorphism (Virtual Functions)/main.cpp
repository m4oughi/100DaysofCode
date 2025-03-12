#include <iostream>

struct Base {
    virtual void doWork() noexcept {
        std::cout << "Base work" << std::endl;
    }
};

struct Derived : public Base {
    void doWork() noexcept override {
        std::cout << "Derived work" << std::endl;
    }
};

int main() {
    Derived d;
    Base& baseRef = d;
    baseRef.doWork();
    return 0;
}
