#include <iostream>
using namespace std;

class Base1 {
public:
    void func(int x) {
        cout << "Base1 func with int: " << x << endl;
    }
};

class Base2 {
public:
    void func(int x) {
        cout << "Base2 func with int: " << x << endl;
    }
};

class Derived : public Base1, public Base2 {
public:
    void callBase1Func(int x) {
        Base1::func(x);  // Resolves ambiguity by explicitly calling Base1's version
    }
    void callBase2Func(int x) {
        Base2::func(x);  // Resolves ambiguity by explicitly calling Base2's version
    }
};

int main() {
    Derived obj;
    obj.callBase1Func(5);
    obj.callBase2Func(10);
    return 0;
}
