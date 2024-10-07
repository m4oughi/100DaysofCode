#include <iostream>
using namespace std;

class Base {
public:
    int baseValue;
    Base(int value = 10) : baseValue(value) {}

    Base(const Base& obj) {  // Copy constructor in Base
        baseValue = obj.baseValue;
        cout << "Base copy constructor called" << endl;
    }

    virtual void show() {
        cout << "Base class: baseValue = " << baseValue << endl;
    }
};

class Derived : public Base {
public:
    int derivedValue;
    Derived(int baseVal = 10, int derivedVal = 20) : Base(baseVal), derivedValue(derivedVal) {}

    Derived(const Derived& obj) : Base(obj) {  // Copy constructor in Derived
        derivedValue = obj.derivedValue;
        cout << "Derived copy constructor called" << endl;
    }

    void show() override {
        cout << "Derived class: baseValue = " << baseValue << ", derivedValue = " << derivedValue << endl;
    }
};

void print(Base baseObj) {  // Object slicing occurs here
    baseObj.show();
}

int main() {
    Derived derivedObj(15, 30);
    print(derivedObj);  // Object slicing happens, calls Base's copy constructor

    return 0;
}
