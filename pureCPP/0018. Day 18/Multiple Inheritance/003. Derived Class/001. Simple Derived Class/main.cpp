#include <iostream>
using namespace std;

class Base1 {
public:
    void display1() {
        cout << "Base1 Display" << endl;
    }
};

class Base2 {
public:
    void display2() {
        cout << "Base2 Display" << endl;
    }
};

class Derived : public Base1, public Base2 {
    // Inherits from Base1 and Base2
};

int main() {
    Derived obj;
    obj.display1();  // Access Base1's method
    obj.display2();  // Access Base2's method
    return 0;
}
