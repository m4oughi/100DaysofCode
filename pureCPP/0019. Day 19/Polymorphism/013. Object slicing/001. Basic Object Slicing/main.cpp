#include <iostream>
using namespace std;

class Base {
public:
    int baseValue = 10;
    void show() {
        cout << "Base class: baseValue = " << baseValue << endl;
    }
};

class Derived : public Base {
public:
    int derivedValue = 20;
    void show() {
        cout << "Derived class: baseValue = " << baseValue << ", derivedValue = " << derivedValue << endl;
    }
};

int main() {
    Derived derivedObj;
    Base baseObj = derivedObj;  // Object slicing occurs here

    baseObj.show();  // Calls Base class's show function

    return 0;
}
