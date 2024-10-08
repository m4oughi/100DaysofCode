#include <iostream>
using namespace std;

class Base1 {
public:
    virtual ~Base1() {
        cout << "Base1 class destructor" << endl;
    }
};

class Base2 {
public:
    virtual ~Base2() {
        cout << "Base2 class destructor" << endl;
    }
};

class Derived : public Base1, public Base2 {
public:
    ~Derived() {
        cout << "Derived class destructor" << endl;
    }
};

int main() {
    Base1* obj = new Derived();
    delete obj;  // Calls Derived's destructor and Base1's destructor (Base2 not handled)
    return 0;
}
