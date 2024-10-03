#include <iostream>
using namespace std;

class Inner {
public:
    void display() {
        cout << "Inner class display method." << endl;
    }
};

class Outer {
    Inner* innerPtr;
public:
    Outer(Inner* p) : innerPtr(p) {}

    // Overload the arrow operator
    Inner* operator->() {
        return innerPtr;
    }
};

class Wrapper {
    Outer* outerPtr;
public:
    Wrapper(Outer* p) : outerPtr(p) {}

    // Overload the arrow operator
    Outer* operator->() {
        return outerPtr;
    }
};

int main() {
    Inner inner;
    Outer outer(&inner);
    Wrapper wrapper(&outer);

    wrapper->display();  // Output: Inner class display method.
    return 0;
}
