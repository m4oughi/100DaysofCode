#include <iostream>
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
    Base* arr[2];
    arr[0] = new Base();
    arr[1] = new Derived();

    for (int i = 0; i < 2; ++i) {
        Derived* d = static_cast<Derived*>(arr[i]);  // Unsafe if arr[i] is not Derived*
        d->show();  // Will cause undefined behavior for Base object
    }

    delete arr[0];
    delete arr[1];
    return 0;
}
