#include <iostream>
using namespace std;

class Base1 {
public:
    int value = 10;
};

class Base2 {
public:
    int value = 20;
};

class Derived : public Base1, public Base2 {
public:
    void showValue() {
        // cout << value << endl;  // Error: Ambiguity between Base1::value and Base2::value
        cout << "Base1 value: " << Base1::value << endl;
        cout << "Base2 value: " << Base2::value << endl;
    }
};

int main() {
    Derived d;
    d.showValue();
    return 0;
}
