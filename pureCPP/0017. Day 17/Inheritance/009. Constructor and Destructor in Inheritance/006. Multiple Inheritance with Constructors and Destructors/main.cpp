#include <iostream>
using namespace std;

// Base class 1
class Animal {
public:
    Animal() {
        cout << "Animal constructor called." << endl;
    }

    ~Animal() {
        cout << "Animal destructor called." << endl;
    }
};

// Base class 2
class Pet {
public:
    Pet() {
        cout << "Pet constructor called." << endl;
    }

    ~Pet() {
        cout << "Pet destructor called." << endl;
    }
};

// Derived class
class Dog : public Animal, public Pet {
public:
    Dog() {
        cout << "Dog constructor called." << endl;
    }

    ~Dog() {
        cout << "Dog destructor called." << endl;
    }
};

int main() {
    Dog myDog;  // Both base class constructors and destructors are called
    return 0;
}
