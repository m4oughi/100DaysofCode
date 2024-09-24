#include <iostream>
using namespace std;

class Base {
public:
    virtual void func(int a) {
        cout << "Base func with int: " << a << endl;
    }
};

class Derived : public Base {
public:
    void func(double a) {
        cout << "Derived func with double: " << a << endl;
    }
};

int main() {
    Derived d;
    d.func(5);      // Ambiguity: Should it call Base::func(int) or Derived::func(double)?
    return 0;
}
