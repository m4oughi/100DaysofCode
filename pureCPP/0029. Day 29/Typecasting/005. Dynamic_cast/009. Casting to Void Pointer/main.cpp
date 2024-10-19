#include <iostream>
using namespace std;

class Base {
public:
    virtual ~Base() {}
};

class Derived : public Base {
public:
    void show() {
        cout << "Derived class function." << endl;
    }
};

int main() {
    Derived* d = new Derived();
    void* vPtr = dynamic_cast<void*>(d);  // Cast to void*

    if (vPtr) {
        cout << "Cast to void* successful." << endl;
    } else {
        cout << "Cast to void* failed." << endl;
    }

    delete d;
    return 0;
}
