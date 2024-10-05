#include <iostream>
using namespace std;

class Base1 {
public:
    virtual void show() {
        cout << "Show from Base1" << endl;
    }
    virtual void info() {
        cout << "Info from Base1" << endl;
    }
};

class Base2 {
public:
    virtual void show() {
        cout << "Show from Base2" << endl;
    }
    virtual void info() {
        cout << "Info from Base2" << endl;
    }
};

class Derived : public Base1, public Base2 {
public:
    void show() override {
        cout << "Show from Derived" << endl;
    }
    
    void info() override {
        cout << "Info from Derived" << endl;
    }
};

int main() {
    Derived d;
    d.show();   // Calls Derived's show
    d.info();   // Calls Derived's info
    return 0;
}
