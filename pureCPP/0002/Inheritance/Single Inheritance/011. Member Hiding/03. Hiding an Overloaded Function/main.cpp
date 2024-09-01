#include <iostream>
using namespace std;

// Base class
class Base {
public:
    void show() {
        cout << "Base class show()" << endl;
    }

    void show(int x) {
        cout << "Base class show(int x), x = " << x << endl;
    }
};

// Derived class
class Derived : public Base {
public:
    void show() { // This hides all overloads of show() in the base class
        cout << "Derived class show()" << endl;
    }
};

int main() {
    Derived obj;
    obj.show(); // Calls Derived class's show()

    // Uncommenting the following line will cause a compile-time error
    // obj.show(5); // Error: no matching function to call 'show(int)'
    
    obj.Base::show();     // Calls Base class's show()
    obj.Base::show(5);    // Calls Base class's show(int)

    return 0;
}
