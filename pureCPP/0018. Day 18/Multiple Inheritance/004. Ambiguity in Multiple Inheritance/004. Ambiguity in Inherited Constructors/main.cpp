#include <iostream>
using namespace std;

class Base1 {
public:
    Base1(int x) {
        cout << "Base1 Constructor, value: " << x << endl;
    }
};

class Base2 {
public:
    Base2(int x) {
        cout << "Base2 Constructor, value: " << x << endl;
    }
};

class Derived : public Base1, public Base2 {
public:
    Derived(int x, int y) : Base1(x), Base2(y) {
        cout << "Derived Constructor" << endl;
    }
};

int main() {
    Derived obj(5, 10);  // Resolves ambiguity by explicitly calling both constructors
    return 0;
}
