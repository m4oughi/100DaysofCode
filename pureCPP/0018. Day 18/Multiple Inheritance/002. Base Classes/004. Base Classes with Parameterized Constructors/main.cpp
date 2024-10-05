#include <iostream>
using namespace std;

class Base1 {
public:
    int value1;
    Base1(int x) : value1(x) {
        cout << "Base1 Constructor with value: " << value1 << endl;
    }
};

class Base2 {
public:
    int value2;
    Base2(int y) : value2(y) {
        cout << "Base2 Constructor with value: " << value2 << endl;
    }
};

class Derived : public Base1, public Base2 {
public:
    Derived(int x, int y) : Base1(x), Base2(y) {
        cout << "Derived Constructor" << endl;
    }
};

int main() {
    Derived obj(3, 7);
    return 0;
}
