#include <iostream>
using namespace std;

class Base1 {
public:
    int a;
    void display1() {
        cout << "Base1 a: " << a << endl;
    }
};

class Base2 {
public:
    int b;
    void display2() {
        cout << "Base2 b: " << b << endl;
    }
};

class Derived : public Base1, public Base2 {
    // Inheriting from both Base1 and Base2
};

int main() {
    Derived obj;
    obj.a = 10;
    obj.b = 20;
    obj.display1();
    obj.display2();
    return 0;
}
