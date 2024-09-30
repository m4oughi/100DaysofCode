#include <iostream>
using namespace std;

struct BaseStruct {
    int a;
};

struct DerivedStruct : BaseStruct {
    void show() {
        cout << "Struct Derived, a: " << a << endl;
    }
};

class BaseClass {
protected:
    int a;
public:
    void setA(int val) {
        a = val;
    }
};

class DerivedClass : public BaseClass {
public:
    void show() {
        cout << "Class Derived, a: " << a << endl;
    }
};

int main() {
    DerivedStruct ds;
    ds.a = 10;
    ds.show();

    DerivedClass dc;
    dc.setA(20);
    dc.show();

    return 0;
}
