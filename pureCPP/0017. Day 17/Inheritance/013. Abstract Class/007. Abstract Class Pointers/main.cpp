#include <iostream>
using namespace std;

// Abstract base class
class Animal {
public:
    virtual void sound() = 0;   // Pure virtual function
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
    animalPtr->sound();  // Calls Dog's sound function

    animalPtr = &myCat;
    animalPtr->sound();  // Calls Cat's sound function

    return 0;
}
