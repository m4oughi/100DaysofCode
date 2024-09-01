#include <iostream>
using namespace std;

// Base class
class Base {
private:
    double value;
public:
    Base(double val) : value(val) {}

    // Conversion operator to convert Base to int
    operator int() const {
        return static_cast<int>(value);
    }

    // Conversion operator to convert Base to double
    operator double() const {
        return value;
    }
};

// Derived class
class Derived : public Base {
public:
    Derived(double val) : Base(val) {}
};

int main() {
    Derived d(15.75);
    int intValue = d; // Conversion to int
    double doubleValue = d; // Conversion to double

    cout << "Integer value: " << intValue << endl;
    cout << "Double value: " << doubleValue << endl;

    return 0;
}
