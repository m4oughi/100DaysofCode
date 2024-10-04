#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    Animal(string name) {
        cout << "Animal constructor called for: " << name << endl;
    }

    ~Animal() {
        cout << "Animal destructor called." << endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    Dog(string name) : Animal(name) {
        cout << "Dog constructor called for: " << name << endl;
    }

    ~Dog() {
        cout << "Dog destructor called." << endl;
    }
};

int main() {
    Dog myDog("Buddy");
    return 0;
}
