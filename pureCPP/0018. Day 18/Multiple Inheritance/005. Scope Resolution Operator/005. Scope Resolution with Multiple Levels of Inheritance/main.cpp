#include <iostream>
using namespace std;

class Base1 {
public:
    void show() {
        cout << "Base1 Show" << endl;
    }
};

class Base2 {
public:
    void show() {
        cout << "Base2 Show" << endl;
    }
};

class Intermediate1 : public Base1 {
public:
    void show() {
        cout << "Intermediate1 Show" << endl;
    }
};

class Intermediate2 : public Base2 {
public:
    void show() {
        cout << "Intermediate2 Show" << endl;
    }
};

class Derived : public Intermediate1, public Intermediate2 {
public:
    void showAll() {
        Intermediate1::show();  // Resolving ambiguity using scope resolution
        Intermediate2::show();  // Resolving ambiguity using scope resolution
        Base1::show();  // Calling show from Base1
        Base2::show();  // Calling show from Base2
    }
};

int main() {
    Derived obj;
    obj.showAll();
    return 0;
}
