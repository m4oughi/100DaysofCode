#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    Animal() {
        cout << "Default Animal constructor called." << endl;
    }

    Animal(int age) {
        cout << "Animal constructor with age: " << age << endl;
    }

    ~Animal() {
        cout << "Animal destructor called." << endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    Dog() {
        cout << "Default Dog constructor called." << endl;
    }

    Dog(int age) : Animal(age) {
        cout << "Dog constructor with age called." << endl;
    }

    ~Dog() {
        cout << "Dog destructor called." << endl;
    }
};

int main() {
    Dog dog1;       // Calls default constructor
    Dog dog2(7);    // Calls parameterized constructor
    return 0;
}
