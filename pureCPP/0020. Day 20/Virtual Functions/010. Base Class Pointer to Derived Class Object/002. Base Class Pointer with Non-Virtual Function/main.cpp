#include <iostream>
using namespace std;

class Base {
public:
    void show() {
        cout << "Base class show()" << endl;
    }
};

class Derived : public Base {
public:
    void show() {
        cout << "Derived class show()" << endl;
    }
};

int main() {
    Base* basePtr = new Derived();
    basePtr->show();  // Calls Base's show() due to non-virtual function

    delete basePtr;
    return 0;
}
