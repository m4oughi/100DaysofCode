#include <iostream>
using namespace std;

class Test {
public:
    void show() {
        cout << "Test class method." << endl;
    }
};

class Wrapper {
    Test* ptr;
public:
    Wrapper(Test* p) : ptr(p) {}

    // Overload the arrow operator
    Test* operator->() {
        return ptr;
    }
};

int main() {
    Test t;
    Wrapper w(&t);
    w->show();  // Output: Test class method.
    return 0;
}
