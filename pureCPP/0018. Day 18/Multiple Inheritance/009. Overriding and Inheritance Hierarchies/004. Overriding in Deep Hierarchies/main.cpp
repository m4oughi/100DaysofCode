#include <iostream>
using namespace std;

class Base1 {
public:
    virtual void display() {
        cout << "Display from Base1" << endl;
    }
};

class Intermediate : public Base1 {
public:
    void display() override {
        cout << "Display from Intermediate" << endl;
    }
};

class Derived : public Intermediate {
public:
    void display() override {
        cout << "Display from Derived" << endl;
    }
};

int main() {
    Derived d;
    d.display();  // Calls Derived's display, which overrides Intermediate and Base1
    return 0;
}
