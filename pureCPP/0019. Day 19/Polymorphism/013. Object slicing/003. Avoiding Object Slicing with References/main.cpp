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

void print(Base& baseObj) {  // No object slicing here
    baseObj.show();  // Calls the correct show function at runtime
}

int main() {
    Derived derivedObj;
    print(derivedObj);  // No object slicing happens

    return 0;
}
