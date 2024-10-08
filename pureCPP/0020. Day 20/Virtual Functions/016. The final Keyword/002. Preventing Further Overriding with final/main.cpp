#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base class show()" << endl;
    }
};

class Derived : public Base {
public:
    void show() final {  // This function cannot be overridden further
        cout << "Derived class show()" << endl;
    }
};

class FinalDerived : public Derived {
public:
    // Compiler error: cannot override a final function
    void show() override {
        cout << "FinalDerived class show()" << endl;
    }
};

int main() {
    FinalDerived obj;
    obj.show();  // Error: cannot override the final function in Derived
    return 0;
}
