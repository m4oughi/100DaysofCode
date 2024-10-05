#include <iostream>
using namespace std;

class Base1 {
public:
    Base1(int x) {
        cout << "Base1 Constructor with value " << x << endl;
    }
    ~Base1() {
        cout << "Base1 Destructor" << endl;
    }
};

class Base2 {
public:
    Base2(int y) {
        cout << "Base2 Constructor with value " << y << endl;
    }
    ~Base2() {
        cout << "Base2 Destructor" << endl;
    }
};

class Derived : public Base1, public Base2 {
public:
    Derived(int x, int y) : Base1(x), Base2(y) {
        cout << "Derived Constructor" << endl;
    }
    ~Derived() {
        cout << "Derived Destructor" << endl;
    }
};

int main() {
    Derived obj(10, 20);
    return 0;
}
