#include <iostream>
using namespace std;

class Base1 {
public:
    int x;
    Base1(int a) : x(a) {
        cout << "Base1 Constructor" << endl;
    }
};

class Base2 {
public:
    int y;
    Base2(int b) : y(b) {
        cout << "Base2 Constructor" << endl;
    }
};

class Derived : public Base1, public Base2 {
public:
    int z;
    Derived(int a, int b, int c) : Base1(a), Base2(b), z(c) {
        cout << "Derived Constructor" << endl;
    }

    void displayValues() {
        cout << "x: " << x << ", y: " << y << ", z: " << z << endl;
    }
};

int main() {
    Derived obj(5, 10, 15);
    obj.displayValues();
    return 0;
}
