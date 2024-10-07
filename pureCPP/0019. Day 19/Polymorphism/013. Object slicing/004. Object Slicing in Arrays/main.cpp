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
    Base baseArray[2];  // Array of base class objects

    baseArray[0] = derivedObj;  // Object slicing occurs here
    baseArray[0].show();  // Calls Base class's show function

    return 0;
}
