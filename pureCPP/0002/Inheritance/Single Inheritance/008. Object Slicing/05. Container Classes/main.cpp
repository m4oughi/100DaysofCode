#include <iostream>
#include <vector>
using namespace std;

// Base class
class Base {
public:
    virtual void show() {
        cout << "Base class show function" << endl;
    }
};

// Derived class
class Derived : public Base {
public:
    void show() override {
        cout << "Derived class show function" << endl;
    }
};

int main() {
    Derived derivedObj;
    Base baseObj = derivedObj;  // Object slicing occurs here

    vector<Base> baseVector;
    baseVector.push_back(derivedObj);  // Object slicing happens when storing the object

    for (auto& obj : baseVector) {
        obj.show();  // Calls Base::show() due to object slicing
    }

    return 0;
}
