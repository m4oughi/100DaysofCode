#include <iostream>
using namespace std;

class Test {
    int value;
public:
    Test(int v = 0) : value(v) {}
    int getValue() const {
        return value;
    }
};

class TestPointer {
    Test* ptr;
public:
    TestPointer(Test* p) : ptr(p) {}

    // Overload dereference operator
    Test& operator*() {
        return *ptr;
    }
};

int main() {
    Test obj(42);
    TestPointer tp(&obj);

    cout << (*tp).getValue() << endl;  // Output: 42

    return 0;
}
