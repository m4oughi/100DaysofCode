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
    obj.show();  // Object slicing occurs here
}

int main() {
    Derived d;
    display(d);  // Calls Base's show() due to object slicing

    return 0;
}
