#include <iostream>
using namespace std;

class Base {
public:
    static int count;  // Static member in base class
};

int Base::count = 0;

class Derived : public Base {
public:
    Derived() {
        count++;
    }
};

int main() {
    Derived d1, d2, d3;

    cout << "Total objects created in Derived class: " << Base::count << endl;
    return 0;
}
