#include <iostream>
using namespace std;

class Base {
public:
    virtual void display() = 0;  // Pure virtual function
};

class Derived1 : public Base {
public:
    void display() override {
        cout << "Display from Derived1" << endl;
    }
};

class Derived2 : public Base {
public:
    void display() override {
        cout << "Display from Derived2" << endl;
    }
};

void show(Base* obj) {
    obj->display();  // Dynamic dispatch based on the actual object type
}

int main() {
    Derived1 d1;
    Derived2 d2;

    show(&d1);  // Outputs "Display from Derived1"
    show(&d2);  // Outputs "Display from Derived2"

    return 0;
}
