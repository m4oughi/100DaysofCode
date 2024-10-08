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
    void show() override final {  // Prevent further overrides
        cout << "Intermediate class show()" << endl;
    }
};

class Derived : public Intermediate {
public:
    void show() override {  // Compiler error: cannot override final function
        cout << "Derived class show()" << endl;
    }
};

int main() {
    Derived obj;
    obj.show();
    return 0;
}
