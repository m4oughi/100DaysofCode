#include <iostream>
using namespace std;

class Base1 {
public:
    int a;
    Base1(int x) : a(x) {
        cout << "Base1 Constructor, a = " << a << endl;
    }
    ~Base1() {
        cout << "Base1 Destructor" << endl;
    }
};

class Base2 {
public:
    int b;
    Base2(int y) : b(y) {
        cout << "Base2 Constructor, b = " << b << endl;
    }
    ~Base2() {
        cout << "Base2 Destructor" << endl;
    }
};

class Derived : public Base1, public Base2 {
public:
    int c;
    Derived(int x, int y, int z) : Base1(x), Base2(y), c(z) {
        cout << "Derived Constructor, c = " << c << endl;
    }
    ~Derived() {
        cout << "Derived Destructor" << endl;
    }
};

int main() {
    Derived obj(10, 20, 30);
    return 0;
}
