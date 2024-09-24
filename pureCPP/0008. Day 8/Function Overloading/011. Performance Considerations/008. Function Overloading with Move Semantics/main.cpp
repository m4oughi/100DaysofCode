#include <iostream>
using namespace std;

class BigObject {
public:
    BigObject() {
        cout << "BigObject created" << endl;
    }
    BigObject(const BigObject&) {
        cout << "BigObject copied" << endl;
    }
    BigObject(BigObject&&) {
        cout << "BigObject moved" << endl;
    }
};

class Operations {
public:
    // Overloaded function for copying
    void process(const BigObject& obj) {
        cout << "Processing by copying" << endl;
    }

    // Overloaded function for moving
    void process(BigObject&& obj) {
        cout << "Processing by moving" << endl;
    }
};

int main() {
    BigObject obj;
    Operations ops;

    ops.process(obj);           // Copy the object
    ops.process(BigObject());   // Move the temporary object
    return 0;
}
