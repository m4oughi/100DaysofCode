#include <iostream>
using namespace std;

class Base1 {
public:
    void showBase1() {
        cout << "Base1 public method" << endl;
    }
};

class Base2 {
public:
    void showBase2() {
        cout << "Base2 public method" << endl;
    }
};

class Derived : private Base1, private Base2 {
public:
    void display() {
        showBase1();  // Accessible within Derived
        showBase2();  // Accessible within Derived
    }
};

int main() {
    Derived d;
    // d.showBase1();  // Error: Private inheritance prevents access
    d.display();  // Calls both base class methods internally
    return 0;
}
