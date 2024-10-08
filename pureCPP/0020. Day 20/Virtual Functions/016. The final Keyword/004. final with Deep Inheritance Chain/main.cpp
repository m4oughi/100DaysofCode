#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base class show()" << endl;
    }
};

class Intermediate : public Base {
public:
    void show() override {
        cout << "Intermediate class show()" << endl;
    }
};

class Derived : public Intermediate {
public:
    void show() final {  // Marked final, cannot be overridden further
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
    Derived obj;
    obj.show();  // Calls Derived's final implementation of show()
    return 0;
}
