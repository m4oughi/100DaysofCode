#include <iostream>
using namespace std;

class Base1 {
public:
    virtual void display() {
        cout << "Display from Base1" << endl;
    }
};

class Base2 {
public:
    virtual void display() {
        cout << "Display from Base2" << endl;
    }
};

class Derived : public Base1, public Base2 {
public:
    void display() override {
        cout << "Display from Derived" << endl;
    }
};

int main() {
    Derived d;
    d.display();  // Calls Derived's display()
    d.Base1::display();  // Calls Base1's display()
    d.Base2::display();  // Calls Base2's display()
    return 0;
}
