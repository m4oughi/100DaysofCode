#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    Animal() {
        cout << "Animal constructor called." << endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    Dog() {
        cout << "Dog constructor called." << endl;
    }
};

int main() {
    Dog myDog;  // Both base and derived class constructors are called
    return 0;
}
