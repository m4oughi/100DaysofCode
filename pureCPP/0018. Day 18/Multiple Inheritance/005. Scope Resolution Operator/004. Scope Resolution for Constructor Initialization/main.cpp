#include <iostream>
using namespace std;

class Base1 {
public:
    int x;
    Base1(int a) : x(a) {
        cout << "Base1 Constructor: " << x << endl;
    }
};

class Base2 {
public:
    int y;
    Base2(int b) : y(b) {
        cout << "Base2 Constructor: " << y << endl;
    }
};

class Derived : public Base1, public Base2 {
public:
    Derived(int a, int b) : Base1(a), Base2(b) {
        cout << "Derived Constructor" << endl;
    }
};

int main() {
    Derived obj(10, 20);
    return 0;
}
