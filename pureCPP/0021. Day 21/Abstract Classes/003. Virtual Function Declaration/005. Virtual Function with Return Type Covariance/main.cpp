#include <iostream>
using namespace std;

class Base {
public:
    virtual Base* getInstance() {
        cout << "Base instance" << endl;
        return new Base();
    }
};

class Derived : public Base {
public:
    Derived* getInstance() override {
        cout << "Derived instance" << endl;
        return new Derived();
    }
};

int main() {
    Base* base = new Derived();
    base->getInstance();  // Outputs "Derived instance"
    delete base;
    return 0;
}
