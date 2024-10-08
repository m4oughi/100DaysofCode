#include <iostream>
using namespace std;

class Base {
public:
    ~Base() {
        cout << "Base class destructor" << endl;
    }
};

class Derived : public Base {
public:
    ~Derived() {
        cout << "Derived class destructor" << endl;
    }
};

int main() {
    Base* obj = new Derived();
    delete obj;  // Only calls Base's destructor, Derived's destructor is skipped
    return 0;
}
