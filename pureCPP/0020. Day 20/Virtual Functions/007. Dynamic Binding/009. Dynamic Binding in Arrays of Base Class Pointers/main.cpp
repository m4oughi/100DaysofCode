#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base class show()" << endl;
    }
};

class Derived1 : public Base {
public:
    void show() override {
        cout << "Derived1 class show()" << endl;
    }
};

class Derived2 : public Base {
public:
    void show() override {
        cout << "Derived2 class show()" << endl;
    }
};

int main() {
    Base* arr[2];  // Array of base class pointers
    arr[0] = new Derived1();
    arr[1] = new Derived2();

    for (int i = 0; i < 2; ++i) {
        arr[i]->show();  // Dynamic binding occurs for each element
    }

    delete arr[0];
    delete arr[1];
    return 0;
}
