#include <iostream>
using namespace std;

class Base {
public:
    int baseValue = 10;
    virtual void show() {
        cout << "Base class: baseValue = " << baseValue << endl;
    }
};

class Derived : public Base {
public:
    int derivedValue = 20;
    void show() override {
        cout << "Derived class: baseValue = " << baseValue << ", derivedValue = " << derivedValue << endl;
    }
};

int main() {
    Derived derivedObj;
    Base* basePtr = &derivedObj;  // No object slicing with pointers
    basePtr->show();  // Calls Derived class's show function

    return 0;
}
