#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base class show()" << endl;
    }
};

class Derived1 : virtual public Base {
public:
    void show() override {
        cout << "Derived1 class show()" << endl;
    }
};

class Derived2 : virtual public Base {
public:
    void show() override {
        cout << "Derived2 class show()" << endl;
    }
};

class Final : public Derived1, public Derived2 {
public:
    void show() override {
        cout << "Final class show()" << endl;
    }
};

void display(Base obj) {
    obj.show();  // Object slicing occurs here
}

int main() {
    Final obj;
    display(obj);  // Calls Base class show() due to object slicing
    return 0;
}
