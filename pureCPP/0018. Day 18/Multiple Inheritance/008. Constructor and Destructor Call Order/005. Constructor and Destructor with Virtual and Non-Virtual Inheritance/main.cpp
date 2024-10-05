#include <iostream>
using namespace std;

class Base {
public:
    Base() {
        cout << "Base Constructor" << endl;
    }
    ~Base() {
        cout << "Base Destructor" << endl;
    }
};

class NonVirtualParent : public Base {
public:
    NonVirtualParent() {
        cout << "NonVirtualParent Constructor" << endl;
    }
    ~NonVirtualParent() {
        cout << "NonVirtualParent Destructor" << endl;
    }
};

class VirtualParent : virtual public Base {
public:
    VirtualParent() {
        cout << "VirtualParent Constructor" << endl;
    }
    ~VirtualParent() {
        cout << "VirtualParent Destructor" << endl;
    }
};

class Child : public NonVirtualParent, public VirtualParent {
public:
    Child() {
        cout << "Child Constructor" << endl;
    }
    ~Child() {
        cout << "Child Destructor" << endl;
    }
};

int main() {
    Child obj;
    return 0;
}
