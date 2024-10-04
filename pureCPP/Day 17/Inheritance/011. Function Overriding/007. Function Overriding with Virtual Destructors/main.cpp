#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    Animal() {
        cout << "Animal constructor called." << endl;
    }

    virtual ~Animal() {  // Virtual destructor
        cout << "Animal destructor called." << endl;
    }

    virtual void sound() {
        cout << "Animal makes a sound." << endl;
    }
};

// Derived class overriding sound() and destructor
class Dog : public Animal {
public:
    Dog() {
        cout << "Dog constructor called." << endl;
    }

    ~Dog() override {
        cout << "Dog destructor called." << endl;
    }

    void sound() override {
        cout << "Dog barks." << endl;
    }
};

int main() {
    Animal* animalPtr = new Dog();
    animalPtr->sound();  // Calls overridden function in Dog class
    delete animalPtr;    // Correctly calls derived class destructor due to virtual destructor
    return 0;
}
