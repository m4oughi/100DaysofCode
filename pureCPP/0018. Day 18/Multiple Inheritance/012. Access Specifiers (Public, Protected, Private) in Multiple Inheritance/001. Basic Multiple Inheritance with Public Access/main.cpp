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

class Derived : public Base1, public Base2 {
    // Inherits publicly from both Base1 and Base2
};

int main() {
    Derived d;
    d.showBase1();  // Accessible
    d.showBase2();  // Accessible
    return 0;
}
