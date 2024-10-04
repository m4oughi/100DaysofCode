#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    virtual void sound() {
        cout << "Animal sound." << endl;
    }
};

// Derived class 1
class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks." << endl;
    }
};

// Derived class 2
class Cat : public Animal {
public:
    void sound() override {
        cout << "Cat meows." << endl;
    }
};

// Function that demonstrates polymorphism
void makeSound(Animal& animal) {
    animal.sound();  // Calls appropriate overridden function at runtime
}

int main() {
    Dog myDog;
    Cat myCat;

    makeSound(myDog);  // Calls Dog's sound method
    makeSound(myCat);  // Calls Cat's sound method

    return 0;
}
