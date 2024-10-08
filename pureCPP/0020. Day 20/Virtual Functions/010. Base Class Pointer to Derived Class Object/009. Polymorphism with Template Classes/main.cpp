#include <iostream>
using namespace std;

template <typename T>
class Base {
public:
    virtual void show(T value) {
        cout << "Base class show(): " << value << endl;
    }
};

class Derived : public Base<int> {
public:
    void show(int value) override {
        cout << "Derived class show(): " << value << endl;
    }
};

int main() {
    Base<int>* basePtr = new Derived();
    basePtr->show(100);  // Calls Derived's show(int)

    delete basePtr;
    return 0;
}
