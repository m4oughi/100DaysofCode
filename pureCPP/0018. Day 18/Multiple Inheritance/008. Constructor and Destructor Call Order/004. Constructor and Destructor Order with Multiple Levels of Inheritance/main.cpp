#include <iostream>
using namespace std;

class Base1 {
public:
    Base1() {
        cout << "Base1 Constructor" << endl;
    }
    ~Base1() {
        cout << "Base1 Destructor" << endl;
    }
};

class Base2 {
public:
    Base2() {
        cout << "Base2 Constructor" << endl;
    }
    ~Base2() {
        cout << "Base2 Destructor" << endl;
    }
};

class Intermediate : public Base1, public Base2 {
public:
    Intermediate() {
        cout << "Intermediate Constructor" << endl;
    }
    ~Intermediate() {
        cout << "Intermediate Destructor" << endl;
    }
};

class FinalDerived : public Intermediate {
public:
    FinalDerived() {
        cout << "FinalDerived Constructor" << endl;
    }
    ~FinalDerived() {
        cout << "FinalDerived Destructor" << endl;
    }
};

int main() {
    FinalDerived obj;
    return 0;
}
