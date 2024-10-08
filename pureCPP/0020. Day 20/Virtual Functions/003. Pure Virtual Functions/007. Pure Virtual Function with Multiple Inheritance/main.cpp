#include <iostream>
using namespace std;

class Base1 {
public:
    virtual void show() = 0; // Pure virtual function in Base1
};

class Base2 {
public:
    virtual void display() = 0; // Pure virtual function in Base2
};

class Derived : public Base1, public Base2 {
public:
    void show() override {
        cout << "Derived class implementation of show()" << endl;
    }

    void display() override {
        cout << "Derived class implementation of display()" << endl;
    }
};

int main() {
    Derived d;
    d.show();    // Calls Derived's show()
    d.display(); // Calls Derived's display()

    return 0;
}
