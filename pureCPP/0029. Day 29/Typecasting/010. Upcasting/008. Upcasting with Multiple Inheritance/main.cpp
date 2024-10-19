#include <iostream>
using namespace std;

class Animal {
public:
    virtual void makeSound() {
        cout << "Animal sound!" << endl;
    }
};

class Swimmer {
public:
    virtual void swim() {
        cout << "Swimming..." << endl;
    }
};

class Dolphin : public Animal, public Swimmer {
public:
    void makeSound() override {
        cout << "Click!" << endl;
    }

    void swim() override {
        cout << "Dolphin swimming!" << endl;
    }
};

int main() {
    Dolphin myDolphin;
    Animal* animalPtr = &myDolphin;   // Upcasting to Animal
    Swimmer* swimmerPtr = &myDolphin; // Upcasting to Swimmer

    animalPtr->makeSound();  // Dolphin sound
    swimmerPtr->swim();      // Dolphin swimming

    return 0;
}
