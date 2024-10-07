#include <iostream>
using namespace std;

class Base {
public:
    void display() {  // Not virtual
        cout << "Base class display function" << endl;
    }
};

class Derived : public Base {
public:
    void display() {
        cout << "Derived class display function" << endl;
    }
};

int main() {
    Base* basePtr = new Derived();
    basePtr->display();  // Calls Base's display function

    delete basePtr;
    return 0;
}
