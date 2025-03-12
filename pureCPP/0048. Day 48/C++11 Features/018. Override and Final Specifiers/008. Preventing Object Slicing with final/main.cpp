#include <iostream>

class Base {
public:
    virtual void show() { std::cout << "Base::show()\n"; }
};

class Derived final : public Base {
public:
    void show() override { std::cout << "Derived::show()\n"; }
};

void print(Base b) { // Object slicing occurs here
    b.show();
}

int main() {
    Derived d;
    print(d); // Calls Base::show() due to slicing
    return 0;
}
