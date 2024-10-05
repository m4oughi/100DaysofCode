#include <iostream>
using namespace std;

class Base1 {
public:
    int value;
    Base1() : value(10) {}
};

class Base2 {
public:
    int value;
    Base2() : value(20) {}
};

class Derived : public Base1, public Base2 {
    // Derived class inherits from both Base1 and Base2
public:
    void showValues() {
        // cout << value;  // Ambiguity error: value is inherited from both Base1 and Base2
        cout << "Base1 Value: " << Base1::value << endl;  // Resolving ambiguity
        cout << "Base2 Value: " << Base2::value << endl;  // Resolving ambiguity
    }
};

int main() {
    Derived obj;
    obj.showValues();
    return 0;
}
