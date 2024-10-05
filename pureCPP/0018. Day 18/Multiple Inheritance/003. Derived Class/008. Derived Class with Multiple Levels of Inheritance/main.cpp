#include <iostream>
using namespace std;

class Base1 {
public:
    void display1() {
        cout << "Base1 Display" << endl;
    }
};

class Base2 {
public:
    void display2() {
        cout << "Base2 Display" << endl;
    }
};

class Intermediate1 : public Base1 {
public:
    void display3() {
        cout << "Intermediate1 Display" << endl;
    }
};

class Intermediate2 : public Base2 {
public:
    void display4() {
        cout << "Intermediate2 Display" << endl;
    }
};

class Derived : public Intermediate1, public Intermediate2 {
public:
    void displayAll() {
        display1();  // From Base1
        display2();  // From Base2
        display3();  // From Intermediate1
        display4();  // From Intermediate2
    }
};

int main() {
    Derived obj;
    obj.displayAll();
    return 0;
}
