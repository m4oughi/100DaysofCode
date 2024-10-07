#include <iostream>
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

int main() {
    Derived derivedObj;
    Base& baseRef = derivedObj;  // Upcasting: Derived to Base reference
    baseRef.show();  // Calls Derived's show function due to polymorphism

    return 0;
}
