#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base class show()" << endl;
    }
};

class Derived : public Base {
public:
    void show() override final {  // Prevents further overriding
        cout << "Derived class show()" << endl;
    }
};

// Uncommenting the following will cause a compilation error
// class MoreDerived : public Derived {
// public:
//     void show() override {  // Compilation error: show() is final in Derived
//         cout << "MoreDerived class show()" << endl;
//     }
// };

int main() {
    Base* basePtr = new Derived();
    basePtr->show();  // Calls Derived's show()

    delete basePtr;
    return 0;
}
