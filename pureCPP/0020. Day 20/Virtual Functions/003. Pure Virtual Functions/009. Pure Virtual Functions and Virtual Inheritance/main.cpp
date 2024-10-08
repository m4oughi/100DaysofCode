#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() = 0; // Pure virtual function
};

class Intermediate1 : virtual public Base {
public:
    void show() override {
        cout << "Intermediate1 class implementation of show()" << endl;
    }
};

class Intermediate2 : virtual public Base {
public:
    void show() override {
        cout << "Intermediate2 class implementation of show()" << endl;
    }
};

class Derived : public Intermediate1, public Intermediate2 {
public:
    void show() override {
        cout << "Derived class overrides Intermediate classes' show()" << endl;
    }
};

int main() {
    Derived d;
    d.show(); // Calls Derived's show()

    return 0;
}
