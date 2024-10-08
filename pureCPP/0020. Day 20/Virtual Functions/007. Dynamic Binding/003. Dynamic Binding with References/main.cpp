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
    void show() override {
        cout << "Derived class show()" << endl;
    }
};

void display(Base& obj) {
    obj.show();  // Calls Derived's show() due to dynamic binding
}

int main() {
    Derived d;
    display(d);  // Passing derived object by reference, dynamic binding occurs

    return 0;
}
