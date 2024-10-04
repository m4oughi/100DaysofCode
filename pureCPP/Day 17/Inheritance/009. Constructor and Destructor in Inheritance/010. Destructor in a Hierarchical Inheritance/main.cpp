#include <iostream>
using namespace std;

// Base class
class LivingBeing {
public:
    LivingBeing() {
        cout << "LivingBeing constructor called." << endl;
    }

    ~LivingBeing() {
        cout << "LivingBeing destructor called." << endl;
    }
};

// Intermediate class
class Animal : public LivingBeing {
public:
    Animal() {
        cout << "Animal constructor called." << endl;
    }

    ~Animal() {
        cout << "Animal destructor called." << endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    Dog() {
        cout << "Dog constructor called." << endl;
    }

    ~Dog() {
        cout << "Dog destructor called." << endl;
    }
};

int main() {
    Dog myDog;  // Observe destructor order in multilevel inheritance
    return 0;
}
