#include <iostream>
using namespace std;

class Base1 {
public:
    int base1_var;
    void setBase1(int value) {
        base1_var = value;
    }
};

class Base2 {
public:
    int base2_var;
    void setBase2(int value) {
        base2_var = value;
    }
};

class Derived : public Base1, public Base2 {
public:
    int derived_var;
    void setDerived(int value) {
        derived_var = value;
    }
    void displayAll() {
        cout << "Base1 Var: " << base1_var << endl;
        cout << "Base2 Var: " << base2_var << endl;
        cout << "Derived Var: " << derived_var << endl;
    }
};

int main() {
    Derived obj;
    obj.setBase1(10);
    obj.setBase2(20);
    obj.setDerived(30);
    obj.displayAll();
    return 0;
}
