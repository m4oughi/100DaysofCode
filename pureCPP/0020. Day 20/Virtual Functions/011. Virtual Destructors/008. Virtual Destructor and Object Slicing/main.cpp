#include <iostream>
using namespace std;

class Base {
public:
    virtual ~Base() {
        cout << "Base class destructor" << endl;
    }
};

class Derived : public Base {
public:
    ~Derived() {
        cout << "Derived class destructor" << endl;
    }
};

void deleteBase(Base obj) {
    // Slicing occurs here, only Base's destructor will be called
}

int main() {
    Derived d;
    deleteBase(d);  // Object slicing, Derived destructor won't be called
    return 0;
}
