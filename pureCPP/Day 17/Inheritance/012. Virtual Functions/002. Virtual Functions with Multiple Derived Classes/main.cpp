#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    virtual void sound() {
        cout << "Animal makes a sound." << endl;
    }
};

// Derived class Dog
class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks." << endl;
    }
};

// Derived class Cat
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
    animalPtr->sound();  // Calls Dog's sound()

    animalPtr = &myCat;
    animalPtr->sound();  // Calls Cat's sound()

    return 0;
}
