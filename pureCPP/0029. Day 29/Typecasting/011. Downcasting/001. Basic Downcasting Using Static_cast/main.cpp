#include <iostream>
using namespace std;

class Animal {
public:
    virtual void makeSound() {
        cout << "Animal sound!" << endl;
    }
};

class Dog : public Animal {
public:
    void makeSound() override {
        cout << "Bark!" << endl;
    }
};

int main() {
    Animal* animalPtr = new Dog();  // Upcasting
    Dog* dogPtr = static_cast<Dog*>(animalPtr);  // Downcasting

    dogPtr->makeSound();  // Calls Dog's version

    delete animalPtr;
    return 0;
}
