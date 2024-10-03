#include <iostream>
using namespace std;

class Inner {
public:
    void performAction() {
        cout << "Inner class action method." << endl;
    }
};

class Outer {
    Inner innerObj;
public:
    Inner* operator->() {
        return &innerObj;
    }
};

template <typename T>
class SmartPointer {
    T* ptr;
public:
    SmartPointer(T* p = nullptr) : ptr(p) {}

    // Overload the arrow operator
    T* operator->() {
        return ptr;
    }

    ~SmartPointer() {
        delete ptr;
    }
};

int main() {
    SmartPointer<Outer> sp(new Outer);

    sp->performAction();  // Output: Inner class action method.
    return 0;
}
