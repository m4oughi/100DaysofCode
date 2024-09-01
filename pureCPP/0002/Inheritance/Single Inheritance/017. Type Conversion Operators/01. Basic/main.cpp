#include <iostream>
using namespace std;

// Base class
class Base {
private:
    int value;
public:
    Base(int val) : value(val) {}

    // Type conversion operator to convert Base to int
    operator int() const {
        return value;
    }
};

// Derived class
class Derived : public Base {
public:
    Derived(int val) : Base(val) {}
};

int main() {
    Derived d(10);
    int val = d; // Implicit conversion from Derived to int
    cout << "The value is: " << val << endl;

    return 0;
}
