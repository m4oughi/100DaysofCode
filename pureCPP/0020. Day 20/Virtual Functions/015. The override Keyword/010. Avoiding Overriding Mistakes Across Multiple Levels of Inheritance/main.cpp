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

class FinalDerived : public Derived {
public:
    void show() override {  // Ensures the correct override across all levels
        cout << "FinalDerived class show()" << endl;
    }
};

int main() {
    Base* obj = new FinalDerived();
    obj->show();  // Calls FinalDerived's show()
    delete obj;
    return 0;
}
