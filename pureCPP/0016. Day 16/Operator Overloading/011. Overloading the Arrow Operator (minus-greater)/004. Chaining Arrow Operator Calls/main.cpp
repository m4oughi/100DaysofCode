#include <iostream>
using namespace std;

class Inner {
public:
    void action() {
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

class Wrapper {
    Outer outerObj;
public:
    Outer* operator->() {
        return &outerObj;
    }
};

int main() {
    Wrapper w;
    w->action();  // Output: Inner class action method.
    return 0;
}
