#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base class show()" << endl;
    }

    virtual void print() {
        cout << "Base class print()" << endl;
    }
};

class Derived : public Base {
public:
    void show() final {  // Marking show() as final
        cout << "Derived class show()" << endl;
    }

    void print() override {
        cout << "Derived class print()" << endl;
    }
};

int main() {
    Derived obj;
    obj.show();   // Calls Derived's final show()
    obj.print();  // Calls Derived's overridden print()
    return 0;
}
