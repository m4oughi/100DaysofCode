#include <iostream>
using namespace std;

class Base {
public:
    void show() {
        cout << "Base show()" << endl;
    }
};

class Derived : private Base {
public:
    void show() {
        cout << "Derived show()" << endl;
    }

    void callBaseShow() {
        Base::show();  // Accessing Base's show() internally
    }
};

int main() {
    Derived d;
    d.show();          // Calls Derived's show()
    // d.Base::show(); // Error: Base's show() is private in Derived
    d.callBaseShow();   // Calls Base's show() indirectly
    return 0;
}
