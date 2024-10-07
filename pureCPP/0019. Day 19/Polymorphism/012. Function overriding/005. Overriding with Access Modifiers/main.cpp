#include <iostream>
using namespace std;

class Base {
public:
    virtual void display() {
        cout << "Base class display function" << endl;
    }
};

class Derived : public Base {
private:
    void display() override {
        cout << "Derived class display function" << endl;
    }
};

int main() {
    Derived derivedObj;
    // basePtr->display();  // Error: display() is now private in Derived

    return 0;
}
