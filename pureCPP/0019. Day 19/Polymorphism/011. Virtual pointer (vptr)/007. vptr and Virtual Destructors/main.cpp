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
    void show() {  // Function hiding, not virtual
        cout << "Derived class show function" << endl;
    }
};

int main() {
    Base* basePtr = new Derived();
    basePtr->show();  // Calls Base's show (no vptr involvement)

    delete basePtr;
    return 0;
}
