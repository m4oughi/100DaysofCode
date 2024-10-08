#include <iostream>
using namespace std;

class Base1 {
public:
    virtual void show() = 0;  // Pure virtual function
};

class Base2 {
public:
    virtual void display() = 0;  // Pure virtual function
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
    d.show();    // Calls Derived's implementation of show()
    d.display(); // Calls Derived's implementation of display()

    return 0;
}
