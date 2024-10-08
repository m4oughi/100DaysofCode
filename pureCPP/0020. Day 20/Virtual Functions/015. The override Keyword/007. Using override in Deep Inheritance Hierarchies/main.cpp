#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base class show()" << endl;
    }
};

class Intermediate : public Base {
public:
    void show() override {
        cout << "Intermediate class show()" << endl;
    }
};

class Derived : public Intermediate {
public:
    void show() override {
        cout << "Derived class show()" << endl;
    }
};

int main() {
    Base* obj = new Derived();
    obj->show();  // Calls Derived's show()
    delete obj;
    return 0;
}
