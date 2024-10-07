#include <iostream>
using namespace std;

class Base {
public:
    void show() {
        cout << "Base class show function" << endl;
    }
};

class Derived : public Base {
public:
    void show() {
        cout << "Derived class show function" << endl;
    }
};

int main() {
    Derived derivedObj;
    Base* basePtr = &derivedObj;  // Upcasting: Derived to Base
    basePtr->show();  // Calls Base class show function

    return 0;
}
