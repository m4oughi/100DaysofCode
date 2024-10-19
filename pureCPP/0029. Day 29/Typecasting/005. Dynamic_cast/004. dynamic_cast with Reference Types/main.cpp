#include <iostream>
#include <exception>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base class." << endl;
    }
};

class Derived : public Base {
public:
    void show() override {
        cout << "Derived class." << endl;
    }
};

int main() {
    Base baseObj;
    try {
        Derived& derivedRef = dynamic_cast<Derived&>(baseObj);  // Cast will fail, throws std::bad_cast
        derivedRef.show();  // This line won't execute
    } catch (const bad_cast& e) {
        cout << "Caught bad_cast exception: " << e.what() << endl;
    }
    return 0;
}
