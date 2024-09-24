#include <iostream>

struct Base1 {
    virtual void func1() const {
        std::cout << "Base1 func1" << std::endl;
    }
};

struct Base2 {
    virtual void func2() const {
        std::cout << "Base2 func2" << std::endl;
    }
};

struct Derived : public Base1, public Base2 {
    void func1() const override {
        std::cout << "Derived func1" << std::endl;
    }

    void func2() const override {
        std::cout << "Derived func2" << std::endl;
    }
};

void show(Base1* b1, Base2* b2) {
    b1->func1();
    b2->func2();
}
int main() {


    return 0;
}