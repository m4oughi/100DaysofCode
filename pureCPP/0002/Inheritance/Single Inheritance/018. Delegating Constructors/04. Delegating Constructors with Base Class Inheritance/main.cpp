#include <iostream>
using namespace std;

// Base class
class Base {
private:
    int baseValue;
public:
    Base(int val) : baseValue(val) {
        cout << "Base constructor called with baseValue: " << baseValue << endl;
    }

    Base() : Base(100) {
        cout << "Base default constructor called." << endl;
    }
};

// Intermediate class inheriting from Base
class Intermediate : public Base {
private:
    int intermediateValue;
public:
    Intermediate(int baseVal, int intVal) : Base(baseVal), intermediateValue(intVal) {
        cout << "Intermediate constructor called with intermediateValue: " << intermediateValue << endl;
    }

    Intermediate() : Intermediate(200, 300) {
        cout << "Intermediate default constructor called." << endl;
    }
};

// Derived class inheriting from Intermediate
class Derived : public Intermediate {
private:
    int derivedValue;
public:
    Derived(int baseVal, int intVal, int derivedVal) : Intermediate(baseVal, intVal), derivedValue(derivedVal) {
        cout << "Derived constructor called with derivedValue: " << derivedValue << endl;
    }

    Derived() : Derived(400, 500, 600) {
        cout << "Derived default constructor called." << endl;
    }
};

int main() {
    Derived d1(10, 20, 30); // Calls Derived constructor with three parameters
    Derived d2;            // Calls Derived default constructor (delegates to three-parameter constructor)

    return 0;
}
