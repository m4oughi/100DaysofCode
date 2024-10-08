#include <iostream>
using namespace std;

class Base {
public:
    virtual void show(int x) {
        cout << "Base class show() with int " << x << endl;
    }
};

class Derived : public Base {
public:
    void show() {  // Does not override Base::show(int) due to different signature
        cout << "Derived class show()" << endl;
    }
};

int main() {
    Base* obj = new Derived();
    obj->show(10);  // Calls Base class show(), not Derived's show()
    delete obj;
    return 0;
}
