#include <iostream>
using namespace std;

class Animal {
public:
    virtual void makeSound() {
        cout << "Animal sound!" << endl;
    }
    virtual ~Animal() {}
};

class Dog : public Animal {
public:
    void makeSound() override {
        cout << "Bark!" << endl;
    }
};

int main() {
    Animal* animalPtr = new Dog();  // Upcasting
    Dog* dogPtr = dynamic_cast<Dog*>(animalPtr);  // Safe downcasting

    if (dogPtr) {
        dogPtr->makeSound();  // Safe: Calls Dog's version
    } else {
        cout << "Downcasting failed!" << endl;
    }

    delete animalPtr;
    return 0;
}
