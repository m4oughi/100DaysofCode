#include <iostream>
using namespace std;

class Base {
public:
    virtual void show(int x) {
        cout << "Base class show() with int " << x << endl;
    }
};

class Derived : public Base {
public:
    void show() override {  // Compiler error: no matching function to override
        cout << "Derived class show()" << endl;
    }
};

int main() {
    Base* obj = new Derived();
    obj->show(10);  // This line would not compile due to override mismatch
    delete obj;
    return 0;
}
