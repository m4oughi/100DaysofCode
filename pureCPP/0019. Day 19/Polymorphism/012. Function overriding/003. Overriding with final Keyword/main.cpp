#include <iostream>
using namespace std;

class Base {
public:
    virtual void display() {
        cout << "Base class display function" << endl;
    }
};

class Derived : public Base {
public:
    void display() final {  // No further overriding allowed
        cout << "Derived class display function" << endl;
    }
};

class MoreDerived : public Derived {
    // This will cause a compilation error due to the 'final' specifier in Derived
    // void display() override {
    //     cout << "MoreDerived class display function" << endl;
    // }
};

int main() {
    Derived derivedObj;
    derivedObj.display();  // Calls Derived's display function

    return 0;
}
