#include <iostream>
using namespace std;

class Inner {
    int value;
public:
    Inner(int v = 0) : value(v) {}
    int getValue() const {
        return value;
    }
};

class Outer {
    Inner* inner;
public:
    Outer(int v) {
        inner = new Inner(v);
    }

    // Overload dereference operator to return the Inner object
    Inner& operator*() {
        return *inner;
    }

    ~Outer() {
        delete inner;
    }
};

int main() {
    Outer o(99);

    cout << (*o).getValue() << endl;  // Output: 99

    return 0;
}
