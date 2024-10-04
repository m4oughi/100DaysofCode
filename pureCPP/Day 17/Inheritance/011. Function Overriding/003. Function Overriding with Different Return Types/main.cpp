#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    virtual Animal* getAnimal() {
        cout << "Returning an Animal." << endl;
        return this;
    }
};

// Derived class overriding the return type with a covariant return type
class Dog : public Animal {
public:
    Dog* getAnimal() override {
        cout << "Returning a Dog." << endl;
        return this;
    }
};

int main() {
    Dog myDog;
    myDog.getAnimal();  // Calls overridden function returning a Dog
    return 0;
}
