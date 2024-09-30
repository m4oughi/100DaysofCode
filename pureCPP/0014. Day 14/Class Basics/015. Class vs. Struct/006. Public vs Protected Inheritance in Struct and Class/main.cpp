#include <iostream>
using namespace std;

struct BaseStruct {
protected:
    int a;
public:
    void setA(int val) { a = val; }
};

struct DerivedStruct : public BaseStruct {
    void display() {
        cout << "Derived Struct a: " << a << endl;  // Can access a due to public inheritance
    }
};

class BaseClass {
protected:
    int a;
public:
    void setA(int val) { a = val; }
};

class DerivedClass : protected BaseClass {  // Protected inheritance
public:
    void display() {
        cout << "Derived Class a: " << a << endl;  // Can access a due to protected inheritance
    }
};

int main() {
    DerivedStruct ds;
    ds.setA(100);
    ds.display();

    DerivedClass dc;
    dc.setA(200);
    dc.display();

    return 0;
}
