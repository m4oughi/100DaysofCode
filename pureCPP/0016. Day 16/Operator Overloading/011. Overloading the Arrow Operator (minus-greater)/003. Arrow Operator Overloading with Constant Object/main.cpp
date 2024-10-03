#include <iostream>
using namespace std;

class Test {
public:
    void show() const {
        cout << "Test class const method." << endl;
    }
};

class Wrapper {
    Test* ptr;
public:
    Wrapper(Test* p) : ptr(p) {}

    // Overload the arrow operator for const objects
    const Test* operator->() const {
        return ptr;
    }
};

int main() {
    Test t;
    const Wrapper w(&t);
    w->show();  // Output: Test class const method.
    return 0;
}
