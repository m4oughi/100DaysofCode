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

void display(Base obj) {
    obj.show();  // Object slicing, dynamic binding won't work here
}

int main() {
    Derived d;
    display(d);  // Slicing occurs, Base's show() is called

    return 0;
}
