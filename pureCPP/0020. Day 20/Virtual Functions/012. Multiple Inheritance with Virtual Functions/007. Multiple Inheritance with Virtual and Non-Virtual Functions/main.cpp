#include <iostream>
using namespace std;

class Base1 {
public:
    virtual void show() {
        cout << "Base1 virtual show()" << endl;
    }

    void display() {
        cout << "Base1 non-virtual display()" << endl;
    }
};

class Base2 {
public:
    void show() {
        cout << "Base2 non-virtual show()" << endl;
    }

    virtual void display() {
        cout << "Base2 virtual display()" << endl;
    }
};

class Derived : public Base1, public Base2 {
public:
    void show() override {
        cout << "Derived class virtual show()" << endl;
    }

    void display() override {
        cout << "Derived class virtual display()" << endl;
    }
};

int main() {
    Derived d;
    d.show();     // Calls Derived's overridden show()
    d.display();  // Calls Derived's overridden display()

    d.Base1::display();  // Calls Base1's non-virtual display()
    d.Base2::show();     // Calls Base2's non-virtual show()

    return 0;
}
