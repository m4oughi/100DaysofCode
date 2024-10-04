#include <iostream>
using namespace std;

// Abstract base class
class Animal {
public:
    virtual void sound() = 0;  // Pure virtual function
};

// Derived class must override the pure virtual function
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
