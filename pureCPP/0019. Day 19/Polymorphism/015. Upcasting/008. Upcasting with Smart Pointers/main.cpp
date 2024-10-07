#include <iostream>
#include <memory>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base class show function" << endl;
    }
    virtual ~Base() {}
};

class Derived : public Base {
public:
    void show() override {
        cout << "Derived class show function" << endl;
    }
};

int main() {
    shared_ptr<Base> basePtr = make_shared<Derived>();  // Upcasting with smart pointer
    basePtr->show();  // Calls Derived's show function due to polymorphism

    return 0;
}
