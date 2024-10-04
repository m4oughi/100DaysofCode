#include <iostream>
using namespace std;

// Abstract base class
class Animal {
public:
    virtual void sound() = 0;  // Pure virtual function
};

// Derived class Dog overriding pure virtual function
class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks." << endl;
    }
};

// Derived class Cat overriding pure virtual function
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
