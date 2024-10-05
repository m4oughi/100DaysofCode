#include <iostream>
using namespace std;

class Base1 {
protected:
    void showBase1() {
        cout << "Base1 protected method" << endl;
    }
};

class Base2 {
protected:
    void showBase2() {
        cout << "Base2 protected method" << endl;
    }
};

class Derived : protected Base1, protected Base2 {
public:
    void display() {
        showBase1();  // Accessible within Derived
        showBase2();  // Accessible within Derived
    }
};

int main() {
    Derived d;
    // d.showBase1();  // Error: Protected method cannot be accessed directly
    d.display();  // Calls both base class methods internally
    return 0;
}
