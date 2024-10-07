#include <iostream>
#include <memory>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base class show function" << endl;
    }
};

class Derived : public Base {
public:
    void show() override {
        cout << "Derived class show function" << endl;
    }
};

void print(shared_ptr<Base> basePtr) {
    basePtr->show();  // Polymorphism works, no slicing
}

int main() {
    shared_ptr<Base> basePtr = make_shared<Derived>();
    print(basePtr);  // Calls Derived's show function

    return 0;
}
