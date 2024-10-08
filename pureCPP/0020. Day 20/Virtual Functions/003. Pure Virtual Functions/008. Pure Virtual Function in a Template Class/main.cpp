#include <iostream>
using namespace std;

template <typename T>
class Base {
public:
    virtual void show(T value) = 0; // Pure virtual function in template class
};

class Derived : public Base<int> {
public:
    void show(int value) override {
        cout << "Derived class implementation of show() with value: " << value << endl;
    }
};

int main() {
    Base<int>* basePtr = new Derived();
    basePtr->show(42); // Calls Derived's show() with value 42

    delete basePtr;
    return 0;
}
