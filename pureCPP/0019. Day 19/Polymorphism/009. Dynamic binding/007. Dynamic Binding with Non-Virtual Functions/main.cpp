#include <iostream>
using namespace std;

class Base {
public:
    void show() {  // Non-virtual function
        cout << "Base class show function" << endl;
    }
};

class Derived : public Base {
public:
    void show() {  // Function hiding (not overriding)
        cout << "Derived class show function" << endl;
    }
};

int main() {
    Base* basePtr = new Derived();
    basePtr->show();  // Calls Base class's show function (no dynamic binding)

    delete basePtr;
    return 0;
}
