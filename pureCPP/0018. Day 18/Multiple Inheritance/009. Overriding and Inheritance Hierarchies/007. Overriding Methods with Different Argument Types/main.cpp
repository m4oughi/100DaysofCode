#include <iostream>
using namespace std;

class Base1 {
public:
    virtual void process(int x) {
        cout << "Process from Base1 with int: " << x << endl;
    }
};

class Base2 {
public:
    virtual void process(double y) {
        cout << "Process from Base2 with double: " << y << endl;
    }
};

class Derived : public Base1, public Base2 {
public:
    void process(int x) override {
        cout << "Process from Derived with int: " << x << endl;
    }
    
    void process(double y) override {
        cout << "Process from Derived with double: " << y << endl;
    }
};

int main() {
    Derived d;
    d.process(10);    // Calls Derived's process(int)
    d.process(3.14);  // Calls Derived's process(double)
    return 0;
}
