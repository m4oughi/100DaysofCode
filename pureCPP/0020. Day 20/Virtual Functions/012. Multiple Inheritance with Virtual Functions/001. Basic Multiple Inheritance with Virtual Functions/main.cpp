#include <iostream>
using namespace std;

class Base1 {
public:
    virtual void show() {
        cout << "Base1 show()" << endl;
    }
};

class Base2 {
public:
    virtual void display() {
        cout << "Base2 display()" << endl;
    }
};

class Derived : public Base1, public Base2 {
public:
    void show() override {
        cout << "Derived class show()" << endl;
    }

    void display() override {
        cout << "Derived class display()" << endl;
    }
};

int main() {
    Derived d;
    d.show();    // Calls Derived's show()
    d.display(); // Calls Derived's display()
    return 0;
}
