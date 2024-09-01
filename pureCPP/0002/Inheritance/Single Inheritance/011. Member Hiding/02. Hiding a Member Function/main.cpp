#include <iostream>
using namespace std;

// Base class
class Base {
public:
    void display() { // Member function in base class
        cout << "Base class display()" << endl;
    }
};

// Derived class
class Derived : public Base {
public:
    void display() { // This hides the base class's display()
        cout << "Derived class display()" << endl;
    }
};

int main() {
    Derived obj;
    obj.display();    // Calls Derived class's display()
    obj.Base::display(); // Calls Base class's display() using scope resolution

    return 0;
}
