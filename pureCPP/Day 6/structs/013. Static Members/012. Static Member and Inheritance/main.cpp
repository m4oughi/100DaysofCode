#include <iostream>

struct Base {
    static int sharedCount;
};

int Base::sharedCount = 0;

struct Derived : public Base {
    void increment() {
        ++sharedCount;
    }
};

int main() {
    Derived d1, d2;
    d1.increment();
    d2.increment();

    std::cout << "Shared Count: " << Derived::sharedCount << std::endl;
}
