#include <iostream>
using namespace std;

class Base {
public:
    virtual void display() {
        cout << "Base class display" << endl;
    }
    virtual ~Base() {
        cout << "Base class destructor" << endl;
    }
};

class Derived : public Base {
public:
    void display() override {
        cout << "Derived class display" << endl;
    }
    ~Derived() {
        cout << "Derived class destructor" << endl;
    }
};

int main() {
    Base* obj = new Derived();
    obj->display();  // Outputs "Derived class display"
    delete obj;      // Outputs "Derived class destructor" followed by "Base class destructor"
    return 0;
}
