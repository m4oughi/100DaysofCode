#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    virtual void sound() {
        cout << "Animal makes a sound." << endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks." << endl;
    }
};

// Another derived class
class Cat : public Animal {
public:
    void sound() override {
        cout << "Cat meows." << endl;
    }
};

int main() {
    Animal* animalPtr;
    Dog myDog;
    Cat myCat;

    animalPtr = &myDog;
    animalPtr->sound();  // Calls overridden function in Dog class

    animalPtr = &myCat;
    animalPtr->sound();  // Calls overridden function in Cat class

    return 0;
}
