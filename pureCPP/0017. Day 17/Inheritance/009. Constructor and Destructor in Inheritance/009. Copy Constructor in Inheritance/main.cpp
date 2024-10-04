#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    Animal() {
        cout << "Animal constructor called." << endl;
    }

    Animal(const Animal& other) {
        cout << "Animal copy constructor called." << endl;
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

    Dog(const Dog& other) : Animal(other) {
        cout << "Dog copy constructor called." << endl;
    }

    ~Dog() {
        cout << "Dog destructor called." << endl;
    }
};

int main() {
    Dog dog1;        // Normal constructor
    Dog dog2 = dog1; // Copy constructor
    return 0;
}
