#include <iostream>

class Base1 {
public:
    virtual void show() {
        std::cout << "Base1 show function." << std::endl;
    }
};

class Base2 {
public:
    virtual void show() {
        std::cout << "Base2 show function." << std::endl;
    }
};

class Derived : public Base1, public Base2 {
public:
    void show() override {
        std::cout << "Derived show function." << std::endl;
    }
};

int main() {
    Derived obj;
    Base1* b1 = &obj;
    Base2* b2 = &obj;

    b1->show();  // Calls Derived's show()
    b2->show();  // Calls Derived's show()

    return 0;
}
