#include <iostream>
using namespace std;

class Animal {
public:
    virtual void makeSound() {
        cout << "Animal sound!" << endl;
    }
    virtual ~Animal() {}
};

class Bird : public Animal {
public:
    void makeSound() override {
        cout << "Tweet!" << endl;
    }
};

class Parrot : public Bird {
public:
    void makeSound() override {
        cout << "Squawk!" << endl;
    }
};

int main() {
    Animal* animalPtr = new Parrot();  // Upcasting
    Bird* birdPtr = dynamic_cast<Bird*>(animalPtr);  // Downcasting to Bird
    Parrot* parrotPtr = dynamic_cast<Parrot*>(animalPtr);  // Downcasting to Parrot

    if (parrotPtr) {
        parrotPtr->makeSound();  // Calls Parrot's version
    } else if (birdPtr) {
        birdPtr->makeSound();  // Calls Bird's version
    } else {
        cout << "Not a bird!" << endl;
    }

    delete animalPtr;
    return 0;
}
