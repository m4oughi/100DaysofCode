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

void print(Base baseObj) {  // Object slicing occurs here
    baseObj.show();  // Calls Base class's show function
}

int main() {
    Derived derivedObj;
    print(derivedObj);  // Object slicing happens when passed by value

    return 0;
}
